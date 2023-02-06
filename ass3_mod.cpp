/******************************************************
** Program: Assignment3
** Author: Dachan Yu
** Date: 05/08/2021
** Description: A zoo tycoon game
** Input: player inputs will be displayed
** Output: game status
******************************************************/
#include "ass3_func.h"
#include "zoo.h"

using namespace std;

int main() {
	string str;
	int num = 0;
	srand(time(NULL));
	Zoo game;

	do {
		if (game.give_funds() < 0) {
			break;
		}
		num = stuff(game);
		if (num == 1) {
			buy(game);
			if (game.give_funds() < 0) {
				break;
			}
		}
		else if (num == 2) {
			cout << endl << endl;
		}
		else {
			break;
		}
		Food(game);

		game.Revenue();
		game.new_turn();
	} while (num != 4);

	if (game.give_funds() < 0) {
		cout << "you have been bankrupt" << endl;
	}
	cout << "game over" << endl;
	return 0;
}