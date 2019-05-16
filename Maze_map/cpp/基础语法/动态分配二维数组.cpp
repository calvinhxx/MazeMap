#include<iostream>
using namespace std;

int main()
{
    int* int_arrary = new int[4];
    //new一维数组
    for(int i=0 ; i < 4 ;i++)
    {
        int_arrary[i] = i + 1;
    }
    for(int i=0 ; i < 4 ;i++)
    {
        cout << int_arrary[i] << endl;
    }
    delete [] int_arrary; //一维数组释放数组内存即可
    //new二维数组
    int** int_p_array = new int*[4];
    for(int i = 0 ; i < 4 ;i++)
    {
        int_p_array[i] = new int[4];
    }
    for(int i = 0 ; i < 4 ;i++)
    {
        delete [] int_p_array[i]; //释放二维数组内的一维数组
        int_p_array[i] = nullptr;
    }
    delete [] int_p_array; //释放二维数组
    int_p_array = nullptr;
    //三维数组
    int*** int_p_p_array = new int**[4];
    for(int i = 0 ; i < 4 ;i++)
    {
        int_p_p_array[i] = new int*[4];
        for(int j = 0; j < 4; j++)
        {
            int_p_p_array[i][j] = new int[4];
        }
    }
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4 ;j++)
        {
            delete [] int_p_p_array[i][j];
            int_p_p_array[i][j] = nullptr;
        }
        delete [] int_p_p_array[i];
        int_p_p_array[i] = nullptr;
    }
    delete [] int_p_p_array;
    int_p_p_array = nullptr;
    return 0;
}
