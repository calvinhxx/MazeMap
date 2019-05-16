//需求 定义一个坐标类
//属性 x和y
//行为 打印x和y的值
#include<iostream>
using namespace std;
class Coordinate//类名需见名知意，尽量不要简写
{
public:
    float x;
    float y;
    void print()
    {
        cout << x << y << endl;
    }
};
int main(void)
{
    const int& x = 3;
    cout << x << endl;
    Coordinate cor1;
    cor1.x = 10;
    cor1.y = 20;
    cor1.print();
    Coordinate *cor2 = new Coordinate;
    if (cor2 == NULL)
    {
        return -1;
    }
    cor2->x = 20;
    cor2->y = 10;
    cor2->print();
    delete cor2;  //new之后紧跟delete
    cor2 = NULL;  //delete之后指针变量还存在需要指向NULL
    Coordinate *cor3 = new Coordinate[3];
    cor3[0].x = 100;
    cor3[0].y = 200;
    cor3[0].print();
    delete []cor3;
    cor3 = NULL;
    return 0;
}
