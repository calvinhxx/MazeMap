#include "Point.h"

class Line
{
private:
    Point* _Point_p_a;
    Point* _Point_p_b;
public:
    Line();
    ~Line();
    void set_point_a(Point a);
    void set_point_b(Point b);
    void print();
};
