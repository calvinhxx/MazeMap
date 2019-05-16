#include<iostream>
class Coordinate
{
private:
	int _int_x;
	int _int_y;
public:
	Coordinate();
	Coordinate(int x ,int y);
	void set_coordinate(int x ,int y);
	int get_x();
	int get_y();
};
