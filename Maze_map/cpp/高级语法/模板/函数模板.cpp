#include <iostream>
using namespace std;
template <class T>
T plus_s (T a ,T b)
{
    return a+b;
}
int main()
{
    cout << plus_s(1,2) << endl;
    cout << plus_s<float>(1.0 ,2.0) << endl;
    return 0;
}
