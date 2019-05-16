//需求 定义一个teacher类
//数据成员: 姓名 性别 年龄
//成员函数：teach
#include <iostream>
#include <string>
using namespace std;

class Teacher
{
private:
    string _str_name;
    string _str_sex;
    int    _int_age;
public:
    void teach(void);
    void set_name(string name);
    string get_name(void);
    void set_sex(string sex);
    string get_sex(void);
    void set_age(int age);
    int get_age(void);
};
void Teacher::teach(void)
{
    cout << _str_name << " " << _str_sex << " " << _int_age << " " << "正在教书" << endl;
}
void Teacher::set_name(string name)
{
    _str_name = name;
}
string Teacher::get_name(void)
{
    return _str_name;
}
void Teacher::set_sex(string sex)
{
    _str_sex = sex;
}
string Teacher::get_sex(void)
{
    return _str_sex;
}
void Teacher::set_age(int age)
{
    _int_age = age;
}
int Teacher::get_age(void)
{
    return _int_age;
}
int main(void)
{
    Teacher t1;
    t1.set_name("xiaoyu");
    t1.set_sex("nan");
    t1.set_age(10);
    t1.teach();
    return 0;
}
