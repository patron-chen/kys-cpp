#include "Element.h"
#include "Font.h"
#include "UISystem.h"

std::vector<Element*> Element::root_;
int Element::prev_present_ticks_ = 0;
int Element::refresh_interval_ = 16;
int Element::render_message_ = 0;

Element::~Element()
{
    for (auto c : childs_)
    {
        if (c && c->is_private_)
        {
            delete c;
        }
    }
}

void Element::drawAll()
{
    //�����һ����ռ��Ļ�ĳ�����ʼ��
    int begin_base = 0;
    for (int i = 0; i < root_.size(); i++)    //��¼���һ��ȫ���Ĳ�
    {
        root_[i]->backRun();
        root_[i]->current_frame_++;
        if (root_[i]->full_window_)
        {
            begin_base = i;
        }
    }
    for (int i = begin_base; i < root_.size(); i++)    //�����һ��ȫ���㿪ʼ��
    {
        root_[i]->drawSelfChilds();
    }
}

//����λ�ã���ı��ӽڵ��λ��
void Element::setPosition(int x, int y)
{
    for (auto c : childs_)
    {
        c->setPosition(c->x_ + x - x_, c->y_ + y - y_);
    }
    x_ = x;
    y_ = y;
}

//�ӻ��Ƶĸ��ڵ��Ƴ�
Element* Element::removeFromRoot(Element* element)
{
    if (element == nullptr)
    {
        if (!root_.empty())
        {
            element = root_.back();
            root_.pop_back();
            return element;
        }
    }
    else
    {
        for (int i = 0; i < root_.size(); i++)
        {
            if (root_[i] == element)
            {
                root_.erase(root_.begin() + i);
                return element;
                break;
            }
        }
    }
    return nullptr;
}

//����ӽڵ�
void Element::addChild(Element* element)
{
    element->setTag(childs_.size());
    childs_.push_back(element);
}

//��ӽڵ㲢ͬʱ�����ӽڵ��λ��
void Element::addChild(Element* element, int x, int y)
{
    addChild(element);
    element->setPosition(x_ + x, y_ + y);
}

//�Ƴ�ĳ���ڵ�
void Element::removeChild(Element* element)
{
    for (int i = 0; i < childs_.size(); i++)
    {
        if (childs_[i] == element)
        {
            childs_.erase(childs_.begin() + i);
            break;
        }
    }
}

//����ӽڵ�
void Element::clearChilds()
{
    for (auto c : childs_)
    {
        delete c;
    }
    childs_.clear();
}

//����������ӽڵ�
void Element::drawSelfChilds()
{
    if (visible_)
    {
        draw();
        for (auto c : childs_)
        {
            if (c->visible_)
            {
                c->drawSelfChilds();
            }
        }
    }
}

void Element::setAllChildState(int s)
{
    for (auto c : childs_)
    {
        c->state_ = s;
    }
}

void Element::setAllChildVisible(bool v)
{
    for (auto c : childs_)
    {
        c->visible_ = v;
    }
}

int Element::findNextVisibleChild(int i0, Direct direct)
{
    if (direct == None || childs_.size() == 0)
    {
        return i0;
    }
    auto current = getChild(i0);

    int min1 = 9999, min2 = 9999 * 2;
    int i1 = i0;
    //1��ʾ���������ϵľ��룬2��ʾ��ֱ�ڰ��������ϵľ���
    for (int i = 0; i < childs_.size(); i++)
    {
        if (i == i0 || childs_[i]->visible_ == false)
        {
            continue;
        }
        auto c = childs_[i];
        int dis1, dis2;
        switch (direct)
        {
        case Left:
            dis1 = current->x_ - c->x_;
            dis2 = abs(c->y_ - current->y_);
            break;
        case Up:
            dis1 = current->y_ - c->y_;
            dis2 = abs(c->x_ - current->x_);
            break;
        case Right:
            dis1 = c->x_ - current->x_;
            dis2 = abs(c->y_ - current->y_);
            break;
        case Down:
            dis1 = c->y_ - current->y_;
            dis2 = abs(c->x_ - current->x_);
            break;
        default:
            break;
        }
        if (dis1 <= 0)
        {
            dis1 += 10000;
        }
        if (dis1 <= min1 && dis1 + dis2 < min2)
        {
            min1 = (std::min)(min1, dis1);
            min2 = (std::min)(min2, dis1 + dis2);
            i1 = i;
        }
        //�������ֵ�ȡ������������һ�µĵ㣬�����ǵڶ����루����̫���ԣ��Ժ��ٸİɣ�
    }
    return i1;
}

int Element::findFristVisibleChild()
{
    for (int i = 0; i < childs_.size(); i++)
    {
        if (childs_[i]->visible_)
        {
            return i;
        }
    }
    return -1;
}

void Element::checkFrame()
{
    if (stay_frame_ > 0 && current_frame_ >= stay_frame_)
    {
        exit_ = true;
    }
}

//����������¼���Ӧ
//ֻ����ǰ�Ľڵ�͵�ǰ�ڵ���ӽڵ㣬�������Ƿ��ڷ�Χ��
//ע��ȫ����Ľڵ�Ҫһֱ�����¼�
void Element::checkStateSelfChilds(BP_Event& e, bool check_event)
{
    //if (exit_) { return; }
    if (visible_ || full_window_)
    {
        //ע�������Ƿ���
        for (int i = childs_.size() - 1; i >= 0; i--)
        {
            childs_[i]->checkStateSelfChilds(e, check_event);
        }
        if (check_event)
        {
            checkSelfState(e);
            int r = checkChildState();
            if (r >= 0)
            {
                active_child_ = r;
            }
            //������dealEvent�иı�ԭ��״̬��ǿ������ĳЩ���
            if (deal_event_)
            {
                dealEvent(e);
                //Ϊ�򻯴��룬�����»س���ESC�Ĳ���д�ڴ˴�
                if (isPressOK(e))
                {
                    onPressedOK();
                    //setAllChildState(Normal);
                }
                if (isPressCancel(e))
                {
                    onPressedCancel();
                    //setAllChildState(Normal);
                }
            }
        }
        dealEvent2(e);
    }
    else
    {
        state_ = Normal;
    }
}

void Element::backRunSelfChilds()
{
    for (auto c : childs_)
    {
        c->backRunSelfChilds();
    }
    backRun();
}

//����¼�
void Element::dealEventSelfChilds(bool check_event)
{
    if (check_event)
    {
        BP_Event e;
        e.type = BP_FIRSTEVENT;
        //�˴�������Ƶ�ԭ����ĳЩϵͳ�»���������һ���¼������ÿ��ѭ��������һ���������Ӧ��
        while (Engine::pollEvent(e))
        {
            if (isSpecialEvent(e))
            {
                break;
            }
        }
        //if (e.type == BP_MOUSEBUTTONUP)
        //{
        //    printf("BP_MOUSEBUTTONUP\n");
        //}
        checkStateSelfChilds(e, check_event);
        switch (e.type)
        {
        case BP_QUIT:
            UISystem::askExit(1);
            break;
        default:
            break;
        }
    }
    else
    {
        Engine::pollEvent();
    }
}

//�Ƿ�Ϊ��Ϸ��Ҫ��������ͣ����ⶪʧһЩ����
bool Element::isSpecialEvent(BP_Event& e)
{
    return e.type == BP_MOUSEBUTTONDOWN
        || e.type == BP_MOUSEBUTTONUP
        || e.type == BP_KEYDOWN
        || e.type == BP_KEYUP
        || e.type == BP_TEXTINPUT
        || e.type == BP_TEXTEDITING;
}

void Element::forceActiveChild()
{
    for (int i = 0; i < childs_.size(); i++)
    {
        childs_[i]->setState(Normal);
        if (i == active_child_)
        {
            childs_[i]->setState(Pass);
        }
    }
}

//���
void Element::checkActiveToResult()
{
    result_ = -1;
    int r = checkChildState();
    if (r == active_child_)
    {
        result_ = active_child_;
    }
}

//��ȡ�ӽڵ��״̬
int Element::checkChildState()
{
    int r = -1;
    for (int i = 0; i < getChildCount(); i++)
    {
        if (getChild(i)->getState() != Normal)
        {
            r = i;
        }
    }
    return r;
}

void Element::checkSelfState(BP_Event& e)
{
    //�����꾭�������µ�״̬
    //ע��BP_MOUSEMOTION��mac������Щ���⣬����
    if (e.type == BP_MOUSEMOTION)
    {
        if (inSide(e.motion.x, e.motion.y))
        {
            state_ = Pass;
        }
        else
        {
            state_ = Normal;
        }
    }
    if ((e.type == BP_MOUSEBUTTONDOWN || e.type == BP_MOUSEBUTTONUP) && e.button.button == BP_BUTTON_LEFT)
    {
        if (inSide(e.button.x, e.button.y))
        {
            state_ = Press;
        }
        else
        {
            state_ = Normal;
        }
    }
    if ((e.type == BP_KEYDOWN || e.type == BP_KEYUP) && (e.key.keysym.sym == BPK_RETURN || e.key.keysym.sym == BPK_SPACE))
    {
        //���¼��̵Ŀո���߻س�ʱ����pass�İ�����Ϊpress
        if (state_ == Pass)
        {
            state_ = Press;
        }
    }
}

void Element::present()
{
    int t = Engine::getTicks() - prev_present_ticks_;

    if (render_message_)
    {
        auto e = Engine::getInstance();
        Font::getInstance()->draw("Render one frame in " + std::to_string(t) + "ms", 20, e->getWindowWidth() - 300, e->getWindowHeight() - 60);
        Font::getInstance()->draw("RenderCopy times: " + std::to_string(Engine::getInstance()->getRenderTimes()), 20, e->getWindowWidth() - 300, e->getWindowHeight() - 30);
        e->resetRenderTimes();
    }
    Engine::getInstance()->renderPresent();
    int t_delay = refresh_interval_ - t;
    if (t_delay > refresh_interval_)
    {
        t_delay = refresh_interval_;
    }
    //printf("%d/%d ", t_delay, prev_present_ticks_);
    if (t_delay > 0)
    {
        Engine::delay(t_delay);
    }
    prev_present_ticks_ = Engine::getTicks();
}

//���б��ڵ㣬����Ϊ�Ƿ���root�����У�Ϊ���������ƣ�Ϊ���򲻻ᱻ����
int Element::run(bool in_root /*= true*/)
{
    exit_ = false;
    visible_ = true;
    if (in_root)
    {
        addOnRootTop(this);
    }
    onEntrance();
    running_ = true;
    while (true)
    {
        if (root_.empty())
        {
            break;
        }
        if (exit_)
        {
            break;
        }
        dealEventSelfChilds(true);
        if (exit_)
        {
            break;
        }
        drawAll();
        checkFrame();
        present();
    }
    running_ = false;
    onExit();
    if (in_root)
    {
        removeFromRoot(this);
    }
    return result_;
}

void Element::exitAll(int begin)
{
    for (int i = begin; i < root_.size(); i++)
    {
        root_[i]->exit_ = true;
        root_[i]->visible_ = false;
    }
}

//ר������ĳЩ����¶�������ʾ����ʱ
//�м���Բ���һ����������Щʲô���벻�����õķ�����
int Element::drawAndPresent(int times, std::function<void(void*)> func, void* data)
{
    if (times < 1)
    {
        return 0;
    }
    if (times > 100)
    {
        times = 100;
    }
    for (int i = 0; i < times; i++)
    {
        dealEventSelfChilds(false);
        drawAll();
        if (func)
        {
            func(data);
        }
        present();
        if (exit_)
        {
            break;
        }
    }
    return times;
}
