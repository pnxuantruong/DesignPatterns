#include "EnchantedMazeGame.h"

Room* EnchantedMazeGame::MakeRoom(int n) const
{
    return new EnchantedRoom(n, CastSpell());;
}

Door* EnchantedMazeGame::MakeDoor(Room* r1, Room* r2) const
{
    return new DoorNeedingSpell(r1, r2);
}

Spell* EnchantedMazeGame::CastSpell() const
{
    return new Spell();
}
