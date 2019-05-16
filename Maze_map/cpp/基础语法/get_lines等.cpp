#include<iostream>
#include<string>
using namespace std;
int main(void)
{
    // //cin 数据为整形  注意cin不能直接给整形数组传递数值
    // int a;
    // cin >> a >> b;
    // cout << a + b << endl;

    // //cin 数据为字符类型
    // char a[20];
    // cin >> a;
    // cout << a << endl;

    // // cin get接受一个字符
    // char ch;
    // ch = cin.get();
    // cout << ch << endl;

    // // cin get接受一串字符 cin.get(字符数组名,接收字符数目)用来接收一行字符串,可以接收空格
    // char c[20];
    // cin.get(c,20);
    // cout << c << endl;

    // //cin.getline() // 接受一个字符串，可以接收空格并输出
    // char c[20];
    // cin.getline(c ,5);
    // cout << c << endl;
    //getline() // 接受一个string类型的字符串，可以接收空格并输出，需包含“#include string”
    string s;
    getline(cin,s);
    cout << s << endl;
    return 0;
}
