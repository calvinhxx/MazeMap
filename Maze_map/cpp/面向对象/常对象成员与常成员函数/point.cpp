#include "point.h"

Point::Point(float x ,float y):_float_x(x) ,_float_y(y)
{

}
Point::~Point()
{

}
Point::Point(const Point& p)
{
    this->_float_x= p._float_x;
    this->_float_y= p._float_y;
}
void Point::set_x(float x)
{
    this->_float_x = x;
}
void Point::set_y(float y)
{
    this->_float_y = y;
}
void Point::set_x_y(float x ,float y)
{
    this->_float_x = x;
    this->_float_y = y;
}
void Point::get_x_y()const
{
    cout << this->_float_x << "const" << endl;
    cout << this->_float_y << "const" << endl;
}
void Point::get_x_y()
{
    cout << this->_float_x << endl;
    cout << this->_float_y << endl;
}
Point& Point::get_point(void)
{
    return *this;
}
void Point::print()
{
    cout << this->_float_x << this->_float_y  << endl;
}
