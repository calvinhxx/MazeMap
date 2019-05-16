//需求 Teacher
//自定义无参构造函数
//自定义有参构造函数
//数据：
//  名字
//  年龄
//成员函数：
//  数据成员的封装函数
#include <iostream>
#include <string>
using namespace std;

class Teacher
{
private:
    string _str_name;
    int _int_age;
public:
    Teacher()
    {
        _str_name = "jim";
        _int_age = 18;
    }
    Teacher(string name ,int age)
    {
        _str_name = name;
        _int_age = age;
    }
    void print()
    {
        cout << _str_name << _int_age << endl;
    }
};
int main(void)
{
    Teacher te1;
    te1.print();
    Teacher te2("calvin" ,10);
    te2.print();
    return 0;
}
