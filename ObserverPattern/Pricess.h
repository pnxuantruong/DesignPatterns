#pragma once
#include "Observer.h"
#include "Hero.h"

class Prnicess :
    public Observer
{
public:
    Prnicess(Hero* hero) {
        this->_hero = hero;
    }

    void Update();

private:
    Hero* _hero;
};

