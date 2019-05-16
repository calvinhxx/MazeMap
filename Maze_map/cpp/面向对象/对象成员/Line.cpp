#include "Line.h"

Line::Line()
{
    cout << "Line" << endl;
}
Line::~Line()
{
    cout << "~Line" << endl;
}
void Line::set_point_a(Point a)
{
    _Point_a.set_point(a.get_x() ,a.get_y());
}
void Line::set_point_b(Point b)
{
    _Point_b.set_point(b.get_x() ,b.get_y());
}
void Line::print()
{
    _Point_a.print();
    _Point_b.print();
}
