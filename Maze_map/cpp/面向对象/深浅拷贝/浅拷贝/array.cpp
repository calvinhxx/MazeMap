#include "array.h"

Array::Array(int count):_int_count(count)
{
}
Array::Array(const Array& array)
{
    _int_count = array._int_count;
}
Array::~Array()
{}
void Array::set_count(int count)
{
    _int_count = count;
}
int Array::get_count(void)
{
    return _int_count;
}
