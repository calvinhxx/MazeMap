//需求:
//1.提示用户输入姓名
//2.接受用户的输入
//3.然后向用户问好hello xxx
//4.告诉用户名字的长度
//5.告诉用户名字的首字母是什么
//6.如果用户直接输入回车那么告诉用户输入为空
//7.如果用户输入为imooc,那么告诉用户角色是一个管理员
#include<iostream>
#include<string>
using namespace std;

int main(void)
{
    cout << "请输入姓名" << endl;
    string name;
    getline(cin,name);
    if (name.empty())
    {
        cout << "输入为空" << endl;
    }
    else if (name == "imooc")
    {
        cout << "administrator" << endl;
    }
    cout << "hello " + name << endl;
    cout << name.length() << endl;
    cout << name[0] << endl;

    return 0;
}
