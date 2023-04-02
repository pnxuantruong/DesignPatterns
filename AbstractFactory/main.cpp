#include <iostream>
#include "MazeGame.h"
#include "EnchantedMazeFactory.h"
#include "BombMazeFactory.h"

using namespace std;
int main() {
	MazeGame mazeGame, enchantedMazeGame, bombMazeGame;
	MazeFactory factory;
	EnchantedMazeFactory enchantedFactory;
	BombMazeFactory bombFactory;

	Maze* aMaze = mazeGame.CreateMaze(factory);
	Maze* bMaze = enchantedMazeGame.CreateMaze(enchantedFactory);
	Maze* cMaze = bombMazeGame.CreateMaze(bombFactory);
	return 0;
}