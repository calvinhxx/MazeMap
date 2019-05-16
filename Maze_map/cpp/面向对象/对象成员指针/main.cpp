//需求：定义两个类
// 点类:数据成员：横坐标x ,纵坐标y  成员函数： 构造函数 析构函数 数据封装
// 线类:点a指针pa，点b指针pb   成员函数：构造函数 析构函数 数据封装函数 数据打印函数
#include"Line.h"

int main()
{
    Line* l = new Line;
    if (l == NULL)
    {
        return -1;
    }
    Point a(1,1),b(2,2);
    l->set_point_a(a);
    l->set_point_b(b);
    l->print();
    delete l;
    l=NULL;
    return 0;
}
