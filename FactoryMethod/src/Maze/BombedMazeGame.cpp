#include "BombedMazeGame.h"

Wall* BombedMazeGame::MakeWall() const
{
    return new BombedWall();
}

Room* BombedMazeGame::MakeRoom(int n) const
{
    return new RoomWithABomb(n);
}
