#include "line.h"

Line::Line(float x_a ,float y_a ,float x_b ,float y_b):_Point_a(x_a ,y_a) ,_Point_b(x_b ,y_b)
{
}
Line::~Line()
{}
void Line::set_point_a(Point a)
{
    // _Point_a = a;
}
void Line::set_point_b(Point b)
{
    // _Point_b = b;
}
void Line::set_point_a_b(Point a,Point b)
{
    // _Point_a = a;
    // _Point_b = b;
}
void Line::print()
{
    // _Point_a.print();
    // _Point_b.print();
}
void Line::get_Point_a()
{
    this->_Point_a.get_x_y();
}
void Line::get_Point_b()
{
    this->_Point_b.get_x_y();
}
