#pragma once
#include "Room.h"
#include "list"
class Maze
{
public:
	Maze() {};
	~Maze();
	void AddRoom(Room*);
	Room* RoomNo(int n) const;
private:
	std::list<Room*> _rooms;
};

