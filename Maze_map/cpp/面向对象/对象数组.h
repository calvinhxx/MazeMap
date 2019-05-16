//对象数组
//需求 定义Coordinate类
//数据成员 x ,y 坐标
//分别从堆和栈中实例化长度为3的对象数组
//给数组中的元素分别赋值
//遍历两个数组

#include <iostream>
#include <string>
using namespace std;
class Coordinate
{
public:
    float float_x;
    float float_y;
    void print()
    {
        cout << float_x << " " << float_y << endl;
    }
};
