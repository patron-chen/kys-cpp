#pragma once

//���������ö�����ͻ���һЩ�鷳���ɴ��Ϊ����
enum Towards
{
    Towards_RightUp = 0,
    Towards_RightDown = 1,
    Towards_LeftUp = 2,
    Towards_LeftDown = 3,
    Towards_None
};

struct Point
{
public:
    Point() {}
    Point(int _x, int _y) : x(_x), y(_y) {}
    ~Point() {}
    int x = 0, y = 0;
};
