#pragma once
#include "Room.h"
#include "Spell.h"
class EnchantedRoom :
    public Room
{
public:
    EnchantedRoom(int n, Spell* spell) : Room(n) { _spell = spell; }
private:
    Spell* _spell;
};

