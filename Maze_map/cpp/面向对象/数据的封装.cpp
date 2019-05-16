// 需求定义一个Student类
// 姓名:name
// 性别:sex
// 学分:score(read only)
// 学习
#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
    int study(int num)
    {
        _int_score += num;
        return _int_score;
    }
    void init_score(void)
    {
        _int_score = 0;
    }
    void set_name(string name)
    {
        _str_name = name;
    }
    string get_name()
    {
        return _str_name;
    }
    string set_sex(string sex)
    {
        _str_sex = sex;
    }
    string get_sex()
    {
        return _str_sex;
    }

private:
    string _str_name;  //_代表私有成员，类型简写+变量名
    string _str_sex;
    int _int_score;

};
int main(void)
{
    Student s1;
    s1.init_score();
    s1.set_name("asd");
    cout << s1.get_name() << endl;
    s1.set_sex("b");
    cout << s1.get_sex() << endl;
    cout << s1.study(10) << endl;

    return 0;
}
