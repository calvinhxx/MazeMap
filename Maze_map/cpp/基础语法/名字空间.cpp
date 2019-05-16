//需求 使用A公司的x变量 B公司的fun函数
#include <iostream>

namespace A
{
    int x = 2;
    void fun()
    {
        std::cout << 2 << std::endl;
    }
}
namespace B
{
    int x = 1;
    void fun()
    {
        std::cout << 1 << std::endl;
    }
}
int main(void)
{
    std::cout << A::x << std::endl;
    B::fun();
    return 0;
}
