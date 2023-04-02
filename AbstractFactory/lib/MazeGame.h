#pragma once
#include "Maze.h"
#include "MazeFactory.h"
class MazeGame
{
public:
	MazeGame() {};
	~MazeGame() {};
	Maze* CreateMaze(MazeFactory&);
};

