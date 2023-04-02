#pragma once
#include "MapSite.h"
class Wall :
    public MapSite
{
public:
    Wall():MapSite() {};

    virtual void Enter() {};
};

