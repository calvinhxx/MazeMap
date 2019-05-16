// 需求
// 定义一个array类 数据成员为count
// 成员函数： 数据成员封装函数，拷贝构造函数，析构函数   //浅拷贝
//
// 添加一个par数据成员和print_par函数成员            //深拷贝
#include"array.h"

int main(void)
{
    Array arr1(10);
    Array arr2 = arr1;
    cout << arr2.get_count() << " " << arr1.get_count() << endl;
    return 0;
}
