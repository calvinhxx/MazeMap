#include <iostream>
#include "point.h"
using namespace std;

class Line
{
private:
    const Point _Point_a;
    // Point const _Point_a;  const 在前在后一样
    Point _Point_b;
public:
    Line(float x_a ,float y_a ,float x_b ,float y_b);
    ~Line();
    void set_point_a(Point a);
    void set_point_b(Point b);
    void set_point_a_b(Point a,Point b);
    void print();
    void get_Point_a();
    void get_Point_b();
};
