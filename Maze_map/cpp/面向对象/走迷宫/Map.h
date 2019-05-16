#ifndef  _MAP_H_
#define  _MAP_H_

#include <iostream>
#include <string>
#include "Person.h"
#include <conio.h>
#include "../../../Coordinate.h"
#define WALL_CHAR "*"
#define ROAD_CHAR " "

class Maze_map
{
private:
    int _int_row;
    int _int_column;
	Coordinate _Coordinate_start_coor;
	Coordinate _Coordinate_current_coor;
    std::string** _p_string_maze_map;
	Person _Person_person;
public:
    Maze_map(std::string (*_p_str)[10],int row,int column ,Person person);
    ~Maze_map();
    void show_maze_map();
	void change_posititon(int next_row, int next_column, int cur_row, int cur_column);
    void start(int _int_row,int column);
	void wait_for_cmd();
    void mission_success();
	void move_up();
	void move_down();
	void move_left();
	void move_right();
};

#endif
