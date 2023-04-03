#include "Door.h"

Door::Door(Room* r1, Room* r2) :MapSite()
{
	_room1 = r1;
	_room2 = r2;
}

Room* Door::OtherSideFrom(Room* currentRoom)
{
	if (currentRoom == _room1) return _room2;
	if (currentRoom == _room2) return _room1;
	return nullptr;
}
