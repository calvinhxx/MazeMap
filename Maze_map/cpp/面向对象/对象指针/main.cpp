//需求：定义Coordinate 类
//数据成员 x ,y
// 声明对象指针，通过指针操作对象。
// 计算两个点横纵坐标的和
#include"Coordinate.h"

int main()
{
    Coordinate* p1 = new Coordinate(); // 对象指针，指向堆区
    p1->float_x = 1;
    p1->float_y = 1;
    p1->print();
    delete p1;
    p1 = NULL;
    Coordinate* p2 = new Coordinate();
    (*p2).float_x = 2;
    (*p2).float_y = 2;
    (*p2).print();
    delete p2;
    p2 = NULL;
    Coordinate p3;
    p3.print();
    Coordinate* p4 = &p3;
    (*p4).float_x = 3;
    (*p4).float_y = 3;
    (*p4).print();
    return 0;
}
