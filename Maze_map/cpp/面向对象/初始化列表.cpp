//需求 Teacher
// 自定义有参默认构造函数
// 使用初始化列表初始化数据
// 数据： 名字  年龄  带的学生个数 const类型
// 成员函数: print
#include"初始化列表.h"
Teacher::Teacher(string name,int age,int num):_str_name(name),_int_age(age),_const_int_num(num)
{
}
void Teacher::print()
{
    cout << _str_name << _int_age << _const_int_num << endl;
}
int main()
{
    Teacher t1;
    t1.print();
    return 0 ;
}
