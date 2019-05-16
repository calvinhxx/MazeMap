#include<iostream>
using namespace std;
//需求：
//提示用户输入一个整数,将整数以8,10,16进制打印
//提示用户输入一个bool值，将bool值打印到屏幕上
int main(void)
{
    cout << "请您输入一个整数" << endl;
    int x = 0;
    cin >> x ;
    cout << oct << x << endl;  //octal 八进制
    cout << dec << x << endl;  //Decimal 十进制
    cout << hex << x << endl;  //hex  16进制
    bool y = 0;
    cin >> y;
    cout << boolalpha << y << endl;
    return 0;
}
