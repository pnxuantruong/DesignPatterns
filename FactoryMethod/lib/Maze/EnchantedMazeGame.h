#pragma once
#include "MazeGame.h"
#include "EnchantedRoom.h"
#include "DoorNeedingSpell.h"
class EnchantedMazeGame :
    public MazeGame
{
public:
    EnchantedMazeGame() : MazeGame() {};

    virtual Room* MakeRoom(int n) const;

    virtual Door* MakeDoor(Room* r1, Room* r2) const;
protected:
    Spell* CastSpell() const;
};

