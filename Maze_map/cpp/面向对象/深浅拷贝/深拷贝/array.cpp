#include "array.h"

Array::Array(int count):_int_count(count)
{
    _p_ar = new int[count];
    _p_ar[0] = 1;
}
Array::Array(const Array& array)
{
    _int_count = array._int_count;
    _p_ar = new int[_int_count];
    for(int i = 0 ; i < _int_count ;i++)
    {
        _p_ar[i] = array._p_ar[i];
    }
}
Array::~Array()
{
    delete [] _p_ar;
    _p_ar = NULL;
}
void Array::set_count(int count)
{
    _int_count = count;
}
int Array::get_count(void)
{
    return _int_count;
}
void Array::print_addr(void)
{
    cout << _p_ar << endl;
}
void Array::print_value(void)
{
    for(int i = 0 ; i < _int_count ; i++)
    {
            cout << _p_ar[i] ;
    }
    cout << endl;
}
