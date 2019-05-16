#include "Line.h"

Line::Line()
{
    _Point_p_a = new Point;
    _Point_p_b = new Point;
    cout << "Line" << endl;
}
Line::~Line()
{
    delete _Point_p_a;
    delete _Point_p_b;
    _Point_p_a = NULL;
    _Point_p_b = NULL;
    cout << "~Line" << endl;
}
void Line::set_point_a(Point a)
{
    _Point_p_a->set_point(a.get_x() ,a.get_y());
}
void Line::set_point_b(Point b)
{
    _Point_p_b->set_point(b.get_x() ,b.get_y());
}
void Line::print()
{
    _Point_p_a->print();
    _Point_p_b->print();
}
