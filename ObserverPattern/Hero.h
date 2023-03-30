#pragma once
#include "Subject.h"
#include <time.h>  
#include <iostream>
#include <algorithm>
#include <Windows.h>
#include "HeroState.h"

using namespace std;

class Hero :
    public Subject
{
public:

    Hero(int maxhealth) {
        maxHealth = maxhealth;
        health = maxhealth;
        state = ALIVE;
        srand(time(NULL));
    }

    ~Hero() {};

    void ChooseDirection();
    void Move();
    void TakeDame(int amount);
    void Recovery(int amount);
    void MeetPricess();
    void Reset();
    void Death();
    HeroState GetState();

private:
    int health;
    int maxHealth;
    HeroState state;
};

