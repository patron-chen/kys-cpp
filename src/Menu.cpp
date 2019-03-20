#include "Menu.h"
#include "Button.h"
#include "Font.h"

Menu::Menu()
{
    active_child_ = 0;
}

Menu::~Menu()
{
}

void Menu::dealEvent(BP_Event& e)
{
    //�˴����������Ӧ
    if (e.type == BP_KEYDOWN)
    {
        Direct direct = None;

        switch (e.key.keysym.sym)
        {
        case BPK_LEFT:
            direct = Left;
            break;
        case BPK_UP:
            direct = Up;
            break;
        case BPK_RIGHT:
            direct = Right;
            break;
        case BPK_DOWN:
            direct = Down;
            break;
        default:
            break;
        }

        if (direct != None)
        {
            //���ȫ��û��ѡ�У�һ�������Ư����ߣ�����ѡ���ϴε�
            bool all_normal = checkAllNormal();
            setAllChildState(Normal);
            if (all_normal)
            {
                //��ǰ���������ʾ�����ҵ�һ��
                if (active_child_ < childs_.size() && !childs_[active_child_]->getVisible())
                {
                    active_child_ = findFristVisibleChild();
                }
            }
            else
            {
                active_child_ = findNextVisibleChild(active_child_, direct);
            }
            forceActiveChild();
        }
    }
}

void Menu::arrange(int x, int y, int inc_x, int inc_y)
{
    for (auto c : childs_)
    {
        if (c->getVisible())
        {
            c->setPosition(x_ + x, y_ + y);
            x += inc_x;
            y += inc_y;
        }
    }
}

void Menu::onPressedOK()
{
    if (checkAllNormal())
    {
        result_ = -1;
        return;
    }
    checkActiveToResult();
    if (result_ >= 0)
    {
        setExit(true);
    }
}

void Menu::onPressedCancel()
{
    exitWithResult(-1);
}

void Menu::onEntrance()
{
    if (!checkAllNormal())
    {
        active_child_ = start_;
    }
    forceActiveChild();
}

void Menu::onExit()
{
    start_ = active_child_;
}

bool Menu::checkAllNormal()
{
    bool all_normal = true;
    for (auto c : childs_)
    {
        if (c->getVisible() && c->getState() != Normal)
        {
            all_normal = false;
            break;
        }
    }
    return all_normal;
}

//void Menu::onPressedOK()
//{
//    pressToResult();
//    if (result_ >= 0)
//    {
//        setExit(true);
//    }
//}

MenuText::MenuText(std::vector<std::string> items) : MenuText()
{
    setStrings(items);
}

void MenuText::setStrings(std::vector<std::string> strings)
{
    strings_ = strings;

    clearChilds();
    int len = 0;
    int i = 0;
    for (auto& str : strings)
    {
        if (str.length() > len)
        {
            len = str.length();
        }
        addChild<Button>(0, i * 25)->setText(str);
        i++;
    }
    w_ = 10 * len;
    h_ = 25 * strings.size();

    childs_text_.clear();
    for (int i = 0; i < strings_.size(); i++)
    {
        childs_text_[strings_[i]] = childs_[i];
    }
}

std::string MenuText::getStringFromResult(int i)
{
    if (i >= 0 && i < strings_.size())
    {
        return strings_[i];
    }
    return "";
}

int MenuText::getResultFromString(std::string str)
{
    for (int i = 0; i < strings_.size(); i++)
    {
        if (str == strings_[i])
        {
            return i;
        }
    }
    return -1;
}
