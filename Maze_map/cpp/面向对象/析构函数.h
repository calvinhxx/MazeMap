#include <iostream>
#include <string>
using namespace std;

class Teacher
{
private:
    string _str_name;
    int _int_age;
    const int _const_int_num;
    string* nickname;
public:
    Teacher(string name = "calvin" ,int age = 23 ,int num = 30);
    Teacher(const Teacher& tea);
    ~Teacher();
    void print();
};
