//需求走迷宫
//迷宫类    墙壁字符，通路字符，迷宫数组   成员函数  构造函数
//人类      人的字符，人的朝向，人的当前位置，人的前一个位置，向不同方向前进的函数

#include <iostream>
#include <stdlib.h>
#include <string>
#include "Map.h"
#include "Person.h"
#include <conio.h>

using namespace std;
//迷宫模型   代码只能在window下运行
 //**********
 //   **** **
 // *   ** **
 // *** *  **
 //  ** * ***
 //*  * *  **
 //** *  * **
 //** ** * **
 //*  **   **
 //* **** ***
int main()
{
    std::string str[10][10] ={ {WALL_CHAR ,WALL_CHAR ,WALL_CHAR ,WALL_CHAR ,WALL_CHAR ,WALL_CHAR ,WALL_CHAR ,WALL_CHAR ,WALL_CHAR ,WALL_CHAR},
                        {ROAD_CHAR ,ROAD_CHAR ,ROAD_CHAR ,WALL_CHAR ,WALL_CHAR ,WALL_CHAR ,WALL_CHAR ,ROAD_CHAR ,WALL_CHAR ,WALL_CHAR},
                        {ROAD_CHAR ,WALL_CHAR ,ROAD_CHAR ,ROAD_CHAR ,ROAD_CHAR ,WALL_CHAR ,WALL_CHAR ,ROAD_CHAR ,WALL_CHAR ,WALL_CHAR},
                        {ROAD_CHAR ,WALL_CHAR ,WALL_CHAR ,WALL_CHAR ,ROAD_CHAR ,WALL_CHAR ,ROAD_CHAR ,ROAD_CHAR ,WALL_CHAR ,WALL_CHAR},
                        {ROAD_CHAR ,ROAD_CHAR ,WALL_CHAR ,WALL_CHAR ,ROAD_CHAR ,WALL_CHAR ,ROAD_CHAR ,ROAD_CHAR ,WALL_CHAR ,WALL_CHAR},
                        {WALL_CHAR ,ROAD_CHAR ,ROAD_CHAR ,WALL_CHAR ,ROAD_CHAR ,WALL_CHAR ,ROAD_CHAR ,ROAD_CHAR ,WALL_CHAR ,WALL_CHAR},
                        {WALL_CHAR ,WALL_CHAR ,ROAD_CHAR ,WALL_CHAR ,ROAD_CHAR ,ROAD_CHAR ,WALL_CHAR ,ROAD_CHAR ,WALL_CHAR ,WALL_CHAR},
                        {WALL_CHAR ,WALL_CHAR ,ROAD_CHAR ,WALL_CHAR ,WALL_CHAR ,ROAD_CHAR ,WALL_CHAR ,ROAD_CHAR ,WALL_CHAR ,WALL_CHAR},
                        {WALL_CHAR ,ROAD_CHAR ,ROAD_CHAR ,WALL_CHAR ,WALL_CHAR ,ROAD_CHAR ,ROAD_CHAR ,ROAD_CHAR ,WALL_CHAR ,WALL_CHAR},
                        {WALL_CHAR ,ROAD_CHAR ,WALL_CHAR ,WALL_CHAR ,WALL_CHAR ,WALL_CHAR ,ROAD_CHAR ,WALL_CHAR ,WALL_CHAR ,WALL_CHAR},
                        };

	cout << "WSAD 控制上下左右 按回车开始游戏  游戏过程中按ESC退出游戏" << endl;
	while (_getch() != 13);
	system("cls");   //清空控制台信息

	Person person("T");
    Maze_map maze_map(str,10,10, person);
    maze_map.show_maze_map();
	maze_map.start(9,1);
	maze_map.wait_for_cmd();
    return 0;
}

