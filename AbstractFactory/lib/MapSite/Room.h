#pragma once
#include "MapSite.h"
#include "Direction.h"
class Room :
    public MapSite
{
public:
    Room();
    Room(int roomNo);
    ~Room();
    MapSite* GetSite(Direction) const;
    void SetSide(Direction, MapSite*);
    int GetNo();

    virtual void Enter() {};
private:
    MapSite* _sides[4];
    int _roomNumber;
};

