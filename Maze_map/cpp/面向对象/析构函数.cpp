//需求：Teacher类
// 1.自定义析构函数
// 数据： 姓名 年龄 绰号[]
#include "析构函数.h"
Teacher::Teacher(string name ,int age, int num):_str_name(name) ,_int_age(age) ,_const_int_num(num)
{
    nickname = new string[10];
    nickname[0] = "qwe";
}
Teacher::Teacher(const Teacher& tea):_str_name(tea._str_name) ,_int_age(tea._int_age) ,_const_int_num(tea._const_int_num)
{
    cout << "copy" << endl;
}
Teacher::~Teacher()
{
    delete [] nickname;
    nickname = NULL;
    cout << "delete" << endl;
}
void Teacher::print()
{
    cout << _str_name << _int_age << _const_int_num << nickname[0] << endl;
}
void global_print(Teacher tea)  // 参数调用拷贝构造
{
    cout << "11" << endl;
}

int main()
{
    Teacher tea1;
    tea1.print();

    return 0;
}
