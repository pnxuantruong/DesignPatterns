#pragma once
#include "MazeFactory.h"
#include "BombedWall.h"
#include "RoomWithABomb.h"
class BombMazeFactory :
    public MazeFactory
{
public:
    BombMazeFactory() {};
    Wall* MakeWall() const {
        return new BombedWall;
    }
    Room* MakeRoom(int n) const {
        return new RoomWithABomb(n);
    }
};

