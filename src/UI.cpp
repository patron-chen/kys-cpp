#include "UI.h"
#include "Font.h"
#include "GameUtil.h"
#include "Save.h"

UI::UI()
{
    //ע�⣬�˴�Լ��childs_[0]Ϊ��UI�������ö�Ӧ��ָ�룬��Ҫ��ʾ�ĸ���ֵ��childs_[0]����
    ui_status_.setPosition(300, 0);
    ui_item_.setPosition(300, 0);
    ui_system_.setPosition(300, 0);
    addChild(&ui_status_);

    //ò�����ﲻ��ֱ�ӵ���������������̬���Ĵ���˳��ȷ��
    button_status_.setTexture("title", 122);
    button_item_.setTexture("title", 124);
    button_system_.setTexture("title", 125);
    addChild(&button_status_, 10, 10);
    addChild(&button_item_, 90, 10);
    addChild(&button_system_, 170, 10);

    addChild(&heads_);
    for (int i = 0; i < TEAMMATE_COUNT; i++)
    {
        heads_.addChild<Head>(20, 60 + i * 90);
    }
    heads_.getChild(0)->setState(Pass);
    //addChild(heads_);
    result_ = -1;    //�Ǹ�����Ʒid������������������ٶ�
}

UI::~UI()
{
}

void UI::onEntrance()
{
}

void UI::draw()
{
    Engine::getInstance()->fillColor({ 0, 0, 0, 128 }, 0, 0, -1, -1);
}

void UI::dealEvent(BP_Event& e)
{
    for (int i = 0; i < TEAMMATE_COUNT; i++)
    {
        auto head = (Head*)heads_.getChild(i);
        auto role = Save::getInstance()->getTeamMate(i);
        head->setRole(role);
        if (role == nullptr)
        {
            continue;
        }
        if (head->getState() == Pass)
        {
            ui_status_.setRole(role);
            current_head_ = i;
        }
        head->setText("");
        //������Ʒ�����ж��Ƿ���ʹ�ã����߿���ʹ�ã����ö�Ӧ��ͷ��״̬
        if (childs_[0] == &ui_item_)
        {
            Item* item = ui_item_.getCurrentItem();
            if (item)
            {
                if (role->Equip0 == item->ID || role->Equip1 == item->ID || role->PracticeItem == item->ID)
                {
                    head->setText("ʹ����");
                    //Font::getInstance()->draw("ʹ����", 25, x + 5, y + 60, { 255,255,255,255 });
                }
                if (GameUtil::canUseItem(role, item))
                {
                    head->setState(Pass);
                }
            }
        }
    }

    //�����趨��ǰͷ��ΪPass�����䲻�䰵����Ϊ����¼����ȼ���ӽڵ㣬�������������Ч
    if (childs_[0] == &ui_status_)
    {
        heads_.getChild(current_head_)->setState(Pass);
    }
    childs_[current_button_]->setState(Pass);

    //��ݼ��л�
    if (e.type == BP_KEYUP)
    {
        switch (e.key.keysym.sym)
        {
        case BPK_1:
            childs_[0] = &ui_status_;
            setAllChildState(Normal);
            button_status_.setState(Press);
            current_button_ = 0;
            break;
        case BPK_2:
            childs_[0] = &ui_item_;
            setAllChildState(Normal);
            button_item_.setState(Press);
            current_button_ = 1;
            break;
        case BPK_3:
            childs_[0] = &ui_system_;
            setAllChildState(Normal);
            button_system_.setState(Press);
            current_button_ = 2;
            break;
        default:
            break;
        }
    }

    //����״̬���֣����ͷ��Ž����¼�
    if (childs_[0] == &ui_status_)
    {
        heads_.setDealEvent(1);
    }
    else
    {
        heads_.setDealEvent(0);
    }
}

void UI::onPressedOK()
{
    //�������Ƿ�ʹ������Ʒ��������Ʒ��id
    if (childs_[0] == &ui_item_)
    {
        auto item = ui_item_.getCurrentItem();
        if (item && item->ItemType == 0)
        {
            setExit(true);
        }
    }

    if (childs_[0] == &ui_system_)
    {
        if (ui_system_.getResult() == 0)
        {
            setExit(true);
        }
    }

    //�ĸ���ť����Ӧ
    if (button_status_.getState() == Press)
    {
        childs_[0] = &ui_status_;
        current_button_ = button_status_.getTag();
    }
    if (button_item_.getState() == Press)
    {
        childs_[0] = &ui_item_;
        current_button_ = button_item_.getTag();
    }
    if (button_system_.getState() == Press)
    {
        childs_[0] = &ui_system_;
        current_button_ = button_system_.getTag();
    }
}
