#include "Coordinate.h"
Coordinate::Coordinate() :_int_x(-1), _int_y(-1)
{}
Coordinate::Coordinate(int x, int y):_int_x(x), _int_y(y)
{}

void Coordinate::set_coordinate(int x, int y)
{
	this->_int_x = x;
	this->_int_y = y;
}
int Coordinate::get_x()
{
	return this->_int_x;
}
int Coordinate::get_y()
{
	return this->_int_y;
}