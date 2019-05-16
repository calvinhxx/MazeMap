#include "Point.h"

Point::Point(float x,float y):_float_x(x) ,_float_y(y)
{
    cout << "point" << endl;
}
Point::~Point()
{
    cout << "~point" << endl;
}
void Point::set_point(float x,float y)
{
    _float_x = x;
    _float_y = y;
}
float Point::get_x()
{
    return _float_x;
}
float Point::get_y()
{
    return _float_y;
}
void Point::print()
{
    cout <<  _float_x << " " << _float_y  << endl;
}
