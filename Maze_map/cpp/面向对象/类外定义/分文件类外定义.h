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
