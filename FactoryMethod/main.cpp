#include <iostream>
#include "MazeGame.h"
#include "EnchantedMazeGame.h"
#include "BombedMazeGame.h"
using namespace std;
int main() {
	MazeGame mazeGame;
	EnchantedMazeGame enchantedMazeGame;
	BombedMazeGame bombMazeGame;
	

	Maze* aMaze = mazeGame.CreateMaze();
	Maze* bMaze = enchantedMazeGame.CreateMaze();
	Maze* cMaze = bombMazeGame.CreateMaze();
	return 0;
}