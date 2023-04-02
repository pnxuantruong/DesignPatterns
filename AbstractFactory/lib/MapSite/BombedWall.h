#pragma once
#include "Wall.h"
class BombedWall :
    public Wall
{
public:
    BombedWall() :Wall() { _isExplored = false; };
private:
    bool _isExplored;
};

