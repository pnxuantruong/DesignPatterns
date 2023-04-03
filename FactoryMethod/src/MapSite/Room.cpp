#include "Room.h"

Room::Room() : MapSite()
{
	for (int i = 0; i < 4; i++) _sides[i] = 0;
	_roomNumber = -1;
}

Room::Room(int roomNo) :MapSite()
{
	for (int i = 0; i < 4; i++) _sides[i] = 0;
	_roomNumber = roomNo;
}

Room::~Room()
{
}

MapSite* Room::GetSite(Direction direction) const
{
	return _sides[direction];
}

void Room::SetSide(Direction direction, MapSite* site)
{
	_sides[direction] = site;
}

int Room::GetNo()
{
	return _roomNumber;
}
