#include "Hero.h"

using namespace std;

enum OPTIONS {
	UP = 119,
	LEFT = 97,
	RIGHT = 100,
	ENTER = 10
};

void Hero::ChooseDirection()
{
	cout << "The hero encounters crossroads!\n";
	cout << "Move Up (W)\n";
	cout << "Move Right (D)\n";
	cout << "Move Up (A)\n";
	bool ok = false;
	do {
		int inputKey = cin.get();

		switch (inputKey)
		{
		case UP:
			ok = true;
			cout << "Move up\n";
			this->Move();
			break;
		case LEFT:
			ok = true;
			cout << "Move left\n";
			this->Move();
			break;
		case RIGHT:
			ok = true;
			cout << "Move right\n";
			this->Move();
			break;
		case ENTER:
			break;
		default:
			cout << "Select again\n";
			break;
		}
	} while (!ok);
}

void Hero::Move()
{
	Sleep(500);
	int moveRes = rand() % 3 - 1;
	int recover = min(rand() % 3 + 1, maxHealth - health);
	int damge = rand() % 6 + 1;
	switch (moveRes)
	{
	case -1:
		cout << "Oh no ! You stuck in a trap\n";
		cout << "Take " << damge << " damge\n";
		this->TakeDame(damge);
		break;
	case 0:
		cout << "Nothing happen!\n";
		cout << "You're get closer to the process\n";
		break;
	case 1:
		cout << "Congrats! You found a herp\n";
		this->Recovery(recover);
		cout << "Recoverd " << recover << " health\n";
		break;
	default:
		break;
	}
	Sleep(500);
}

void Hero::TakeDame(int amount)
{
	health = max(health - amount, 0);
	if (health == 0) {
		this->Death();
		this->Notify();
		return;
	}
	state = HURT;
	this->Notify();
	state = ALIVE;
}

void Hero::Recovery(int amount)
{
	health += amount;
	state = HEAL;
	this->Notify();
	state = ALIVE;
}

void Hero::MeetPricess()
{
	cout << "You found your love!\n";
	cout << "Get married and have childen LOL!\n";
}

void Hero::Reset()
{
	state = ALIVE;
	health = maxHealth;
}

void Hero::Death()
{
	state = DEATH;
	cout << "My love! We'll belong to each other in next life!!!\n";
}

HeroState Hero::GetState()
{
	return state;
}
