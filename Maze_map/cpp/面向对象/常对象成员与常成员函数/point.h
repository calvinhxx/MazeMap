#include <iostream>
using namespace std;

class Point
{
private:
    float _float_x;
    float _float_y;
public:
    Point(float x ,float y);
    Point(const Point& p);
    ~Point();
    void set_x(float x);
    void set_y(float y);
    void get_x_y()const;
    void get_x_y();
    void set_x_y(float x ,float y);
    Point& get_point(void);
    void print();
};
