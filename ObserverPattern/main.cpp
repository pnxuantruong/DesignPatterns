#include "Hero.h";
#include "Pricess.h";
#include "HeroState.h";
#include "Witch.h";

int main() {
	// number of move need for meet princess
	int moveNumber = 15;
	bool isDone = false;
	Hero* hero = new Hero(10);
	Prnicess* princess = new Prnicess(hero);
	Witch* witch = new Witch(hero);

	hero->Attach(princess);
	hero->Attach(witch);

	HeroState state = hero->GetState();
	
	while (!isDone) {
		while (state != DEATH && moveNumber > 0) {
			hero->ChooseDirection();
			moveNumber--;
			state = hero->GetState();
		}
		if (state == ALIVE) {
			cout << "HAPPY ENDING\n";
			hero->MeetPricess();
		}
		else {
			cout << "GOOD LUCK NEXT TIME\n";
		}
		cout << "You want to play again? Y/N\n";

		while(true) {
			int input = cin.get();
			if (input == 121) {
				moveNumber = 15;
				hero->Reset();
				break;
			}
			else if (input == 110) {
				isDone = true;
				break;
			}
		}		
	}
}