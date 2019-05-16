#ifndef __POINT_H__
#define __POINT_H__

#include <iostream>
using namespace std;

class Point
{
private:
    float _float_x;
    float _float_y;
public:
    Point(float x=0.0,float y=0.0);
    ~Point();
    void set_point(float x,float y);
    float get_x();
    float get_y();
    void print();
};

#endif
