//需求：Teacher类
// 自定义拷贝构造函数
// 数据： 姓名 年龄
#include "拷贝构造函数.h"
Teacher::Teacher(string name ,int age, int num):_str_name(name) ,_int_age(age) ,_const_int_num(num)
{
}
Teacher::Teacher(const Teacher& tea):_str_name(tea._str_name) ,_int_age(tea._int_age) ,_const_int_num(tea._const_int_num)
{
    cout << "copy" << endl;
}
void Teacher::print()
{
    cout << _str_name << _int_age << _const_int_num << endl;
}
void global_print(Teacher tea)  // 参数调用拷贝构造
{
    cout << "11" << endl;
}

int main()
{
    Teacher tea1;
    tea1.print();
    Teacher tea2 = tea1;
    tea2.print();
    Teacher tea3(tea1);
    tea3.print();
    global_print(tea2);

    return 0;
}
