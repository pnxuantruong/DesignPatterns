#include "Witch.h"

void Witch::Update()
{
	HeroState heroState = _hero->GetState();
	switch (heroState)
	{
	case HEAL:
		cout << "The Witch will prepare more deadly traps\n";
		break;
	case HURT:
		cout << "HA HA HAAA!!! ";
		cout << "The Witch laughs gleefully\n";
		break;
	case DEATH:
		cout << "The Witch said: 'Another fool who believed in love is gone'\n";
		break;
	default:
		break;
	}
	Sleep(500);
}
