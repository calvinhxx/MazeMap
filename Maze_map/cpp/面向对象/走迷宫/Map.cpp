#include"Map.h"
Maze_map::Maze_map(std::string (*_p_str)[10],int row ,int column, Person person):_int_row(row) , _int_column(column), _Person_person(person)
{
    this->_p_string_maze_map = new std::string* [_int_row];
    for(int i = 0; i < _int_row; i++)
    {
        (this->_p_string_maze_map)[i] = new std::string[_int_column];
    }
    for(int i = 0; i < _int_row; i++)
    {
        for(int j = 0 ;j < _int_column; j++)
        {
            (this->_p_string_maze_map)[i][j] = _p_str[i][j];
        }
    }
}
Maze_map::~Maze_map()
{
    for(int i = 0; i < _int_row; i++)
    {
        delete [] (this->_p_string_maze_map)[i];
        (this->_p_string_maze_map)[i] = nullptr;
    }
    delete [] this->_p_string_maze_map;
    this->_p_string_maze_map = nullptr;
}
void Maze_map::show_maze_map()
{
    for(int i = 0; i < 10 ;i++)
    {
        for(int j = 0 ;j < 10 ;j++)
        {
            std::cout << this->_p_string_maze_map[i][j] ;
        }
        std::cout << std::endl;
    }
}
void Maze_map::change_posititon(int next_row, int next_column, int cur_row ,int cur_column)
{
	(this->_p_string_maze_map)[next_row][next_column] = _Person_person.get_person_char();
	(this->_p_string_maze_map)[cur_row][cur_column] = ROAD_CHAR;
	this->_Coordinate_current_coor.set_coordinate(next_column, next_row);
}
void Maze_map::start(int row ,int column)
{
	(this->_p_string_maze_map)[row][column] = _Person_person.get_person_char();
	this->_Coordinate_current_coor.set_coordinate(column ,row);
	this->_Coordinate_start_coor.set_coordinate(column, row);
}
void Maze_map::mission_success()
{
	system("cls");   //清空控制台信息
	cout << "mission_success" << endl;
	system("pause");
}
void Maze_map::move_up()
{
	int cur_row = this->_Coordinate_current_coor.get_y();
	int cur_column = this->_Coordinate_current_coor.get_x();
	int next_row = this->_Coordinate_current_coor.get_y() - 1;
	int next_column = this->_Coordinate_current_coor.get_x();
	if ( next_row < 0)   //向上移动如果会移出可行区域则不响应
	{
		return;
	}
	if ((this->_p_string_maze_map)[next_row][next_column]   == WALL_CHAR )   //上面是墙
	{
		return;
	}
	change_posititon(next_row, next_column, cur_row, cur_column);
}
void Maze_map::move_down()
{
	int cur_row = this->_Coordinate_current_coor.get_y();
	int cur_column = this->_Coordinate_current_coor.get_x();
	int next_row = this->_Coordinate_current_coor.get_y() + 1;
	int next_column = this->_Coordinate_current_coor.get_x();
	if ((next_row > 9) and ((next_row != _Coordinate_start_coor.get_y()) or (next_column != _Coordinate_start_coor.get_x())))   //向下移动如果会移出且不是起始位置认为走出迷宫
	{
		mission_success();
		return;
	}
	if (next_row >9 )   //向下移动如果会移出可行区域则不响应
	{
		return;
	}
	if ((this->_p_string_maze_map)[next_row][next_column] == WALL_CHAR)   //下面是墙
	{
		return;
	}
	change_posititon(next_row, next_column, cur_row, cur_column);
}
void Maze_map::move_left()
{
	int cur_row = this->_Coordinate_current_coor.get_y();
	int cur_column = this->_Coordinate_current_coor.get_x();
	int next_row = this->_Coordinate_current_coor.get_y();
	int next_column = this->_Coordinate_current_coor.get_x() - 1;
	if (next_column < 0)   //向左移动如果会移出可行区域则不响应
	{
		return;
	}
	if ((this->_p_string_maze_map)[next_row][next_column] == WALL_CHAR)   //左面是墙
	{
		return;
	}
	change_posititon(next_row, next_column, cur_row, cur_column);
}
void Maze_map::move_right()
{
	int cur_row = this->_Coordinate_current_coor.get_y();
	int cur_column = this->_Coordinate_current_coor.get_x();
	int next_row = this->_Coordinate_current_coor.get_y();
	int next_column = this->_Coordinate_current_coor.get_x() + 1;
	if (next_column > 9)   //向右移动如果会移出可行区域则不响应
	{
		return;
	}
	if ((this->_p_string_maze_map)[next_row][next_column] == WALL_CHAR)   //右面是墙
	{
		return;
	}
	change_posititon(next_row, next_column, cur_row, cur_column);
}
void Maze_map::wait_for_cmd()
{
	int ch;
	while (1) {
		if (_kbhit()) {//如果有按键按下，则_kbhit()函数返回真
			ch = _getch();//使用_getch()函数获取按下的键值
			if ((ch == 'w' ))
			{
				this->move_up();
				system("cls");   //清空控制台信息
				this->show_maze_map();
			}
			if ( (ch == 'a') )
			{
				this->move_left();
				system("cls");   //清空控制台信息
				this->show_maze_map();
			}
			if ((ch == 's') )
			{
				this->move_down();
				system("cls");   //清空控制台信息
				this->show_maze_map();
			}
			if ((ch == 'd'))
			{
				this->move_right();
				system("cls");   //清空控制台信息
				this->show_maze_map();
			}
			if (ch == 27) 
			{ break; }//当按下ESC时循环，ESC键的键值时27.
		}
	}
}