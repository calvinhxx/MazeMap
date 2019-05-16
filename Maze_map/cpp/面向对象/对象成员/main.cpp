//需求：定义两个类
// 点类:数据成员：横坐标x ,纵坐标y  成员函数： 构造函数 析构函数 数据封装
// 线类:数据点a，点b   成员函数：构造函数 析构函数 数据封装函数 数据打印函数
#include"Line.h"

int main()
{
    Point pa(1,1) ,pb(2,2);
    pa.print();
    pb.print();

    Line l;
    l.set_point_a(pa);
    l.set_point_b(pb);
    l.print();
    return 0;
}
