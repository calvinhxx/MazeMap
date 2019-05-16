#include"对象数组.h"

int main()
{
    Coordinate cor[3]; //栈
    for(int i = 0;i < 3 ; i++)
    {
        cor[i].float_x = i;
        cor[i].float_y = i;
        cor[i].print();
    }

    Coordinate* p = new Coordinate[3]; //堆
    for(int i = 0; i < 3 ;i++)
    {
        p[i].float_x = i;
        p[i].float_y = i;
        p[i].print();
    }

    for(int i = 0; i < 3;i++)
    {
        (p+i)->float_x = i;
        (p+i)->float_y = i;
        (p+i)->print();
    }
    delete [] p;
    p = NULL;
    return 0;
}
