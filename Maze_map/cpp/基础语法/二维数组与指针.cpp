#include<iostream>
using namespace std;

int main()
{
    int int_array[3][3] = {{1,2,3},{1,2,3},{1,2,3}};
    int** p_Array = nullptr;
    p_Array = int_array;
    cout << p_Array[0][0] << endl;
    return 0;
}
