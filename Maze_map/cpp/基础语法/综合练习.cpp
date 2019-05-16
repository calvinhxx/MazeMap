//知识点bool类型 命名空间 输入输出
//需求 实现一个函数 获取一个数组中元素的最大值或最小值
#include<iostream>

namespace A
{
    int Get_max_or_min(int array[] ,int count ,bool max)
    {
        int temp = array[0];
        if (max)
        {
            for(int i = 0; i < count ; i++)
            {
                if (temp <= array[i])
                {
                    temp = array[i];
                }
            }
        }
        else
        {
            for(int i = 0; i < count ; i++)
            {
                if (temp >= array[i])
                {
                    temp = array[i];
                }
            }
        }
        return temp;
    }
}
int main(void)
{
    int array[3] = {1 ,2 ,3};
    int x = A::Get_max_or_min(array ,3 ,false);
    std::cout << x << std::endl;
    return 0;
}
