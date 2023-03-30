#include "Pricess.h"
#include <string>
using namespace std;

void Prnicess::Update()
{
	HeroState heroState = _hero->GetState();
	switch (heroState)
	{
	case HEAL:
		cout << "Pricess breathed a sigh of relief\n";
		break;
	case HURT:
		cout << "Pricess's heart rate goes up to the roof\n";
		break;
	case DEATH:
		cout << "Princess was sad because she had to wait for another person\n";
		break;
	default:
		break;
	}
	Sleep(500);
}
