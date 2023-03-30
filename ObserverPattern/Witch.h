#pragma once
#include "Observer.h"
#include "Hero.h";
class Witch :
    public Observer
{
public:
    Witch(Hero* hero) {
        this->_hero = hero;
    }

    void Update();

private:
    Hero* _hero;
};

