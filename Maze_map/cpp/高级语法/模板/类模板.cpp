#include <iostream>
using namespace std;
template<class T>
class Print
{
public:
    T i;
    Print(T argc):i(argc)
    {

    }
    void print()
    {
        cout << i << endl;
    }
};
int main()
{
    Print<int> p1(1);
    p1.print();
    Print<int> p2(2);
    p2.print();
    return 0;
}
