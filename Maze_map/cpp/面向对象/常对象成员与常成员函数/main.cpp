//需求:常对象，常对象成员，常成员函数
//定义两个类
//点类:数据成员 x坐标，y坐标  函数成员 构造函数，析构函数，数据封装函数
//线类:数据成员 点A，点B  函数成员 构造函数，析构函数。数据封装函数 ，信息打印函数

#include "line.h"


int main()
{
    Point a(2.2 ,3.3);
    const Point& b = a;
    b.get_x_y();
    const Point* c = &a;
    c->get_x_y();

    Line l(1.0 ,2.0 ,3.0 ,4.0);
    l.get_Point_a();
    l.get_Point_b();
    return 0;
}
