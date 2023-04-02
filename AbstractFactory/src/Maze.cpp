#include "Maze.h"


Maze::~Maze()
{
	_rooms.clear();
}

void Maze::AddRoom(Room* r)
{
	_rooms.push_back(r);
}

Room* Maze::RoomNo(int n) const
{
	for (auto r : _rooms) {
		if (r->GetNo() == n) return r;
	}
	return nullptr;
}
