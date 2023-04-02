#pragma once
#include "Room.h"
class RoomWithABomb :
    public Room
{
public:
    RoomWithABomb(int n) : Room(n) { _isExplored = false; };
private:
    bool _isExplored;
};

