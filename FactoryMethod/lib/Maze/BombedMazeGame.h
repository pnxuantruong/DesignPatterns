#pragma once
#include "MazeGame.h"
#include "BombedWall.h"
#include "RoomWithABomb.h"
class BombedMazeGame :
    public MazeGame
{
public:
    BombedMazeGame() :MazeGame() {};
    virtual Wall* MakeWall() const;
    virtual Room* MakeRoom(int n) const;
};

