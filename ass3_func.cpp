#include "ass3_func.h"

using namespace std;

bool is_digit(string str) {
	for (int i = 0; i < str.length(); i++) {
		if (!(isdigit(str[i]))) {
			return true;
		}
		else {
			return false;
		}
	}
	return true;
}

int input1() {
	string str;
	int x = 0;
	do {
		cout << "what would you like to do?" << endl;
		cout << "[1]Buy an animal [2]Do nothing [3]Quit" << endl;
		getline(cin, str);
		if (is_digit(str)) {
			cout << "poor input, please try again" << endl << endl;
		}
		else {
			x = stoi(str);
			if ((x == 1) || (x == 2) || (x == 3)) {
				return x;
			}
			cout << "poor input, please try again" << endl << endl;
		}

	} while (x != 1);
}

int input2() {
	string str;
	int num = 0;
	do {
		cout << "what would you like to buy" << endl << endl;
		cout << "Sea Lions: " << "$" << "800" <<
			endl << "Black Bears: " << "$" << "5000" <<
			endl << "Tigers: " << "$" << "10,000" <<
			endl << endl;
		cout << "[1]Sea Lions [2]Black Bears [3]Tigers" << endl;
		getline(cin, str);
		if (is_digit(str)) {
			cout << "poor input, please try again" << endl << endl;
		}
		else {
			num = stoi(str);
			if ((num == 1) || (num == 2) || (num == 3) || (num == 4)) {
				return num;
			}
			cout << "poor input, please try again" << endl << endl;
		}
	} while (num != 3);
}

int input3() {
	string str;
	int num = 0;

	do {
		cout << "how many animals would you like to buy?" << endl;
		cout << "[1] [2]" << endl;
		getline(cin, str);
		if (is_digit(str)) {
			cout << "poor input, please try again" << endl << endl;
		}
		else {
			num = stoi(str);
			if ((num == 1) || (num == 2)) {
				return num;
			}
			cout << "poor input, please try again" << endl << endl;
		}
	} while (num != 1);
}

void animals(Zoo& game) {
	string str;
	int num = 0;

	do {
		cout << "would you like to check what animals you own?" << endl;
		cout << "[1]yes [2]no" << endl;
		getline(cin, str);
		if (is_digit(str)) {
			cout << "poor input, please try again" << endl << endl;
		}
		else {
			num = stoi(str);
			if ((num == 1) || (num == 2)) {
				break;
			}
			cout << "poor input, please try again" << endl << endl;
		}
	} while (num != 1);

	if (num == 1) {
		cout << endl << endl;
		game.animal_info();
		cout << endl;
	}
	else {}
}

void buy(Zoo& game) {
	int num = 0;

	num = input2();

	if (num == 1) {
		game.buy_sea_lion(input3());
	}
	else if (num == 2) {
		game.buy_bear(input3());
	}
	else if (num == 3) {
		game.buy_tiger(input3());
	}
	else {

	}
	cout << endl << endl;
}

void event_premium(Zoo& game) {
	string str;
	int num = rand() % 10 + 1;

	if (num == 1) {
		game.animal_rng(str);
		cout << str << " got sick" << endl;

		if (game.give_funds() < game.health_care_cost(str)) {
			game.death(str);
		}
		else {
			game.health_care(str);
		}
	}
	else if (num == 2) {
		cout << "more visitors have visited your sea lion exhibit than usual" << endl;
		game.bonus();
	}
	else if ((num == 3) || (num == 4)) {
		game.adult_animal_rng(str);
		cout << str << " have given birth" << endl;
		game.birthing(str);
	}
	else {
		cout << "nothing happened this month" << endl;
	}
}

void event_basic(Zoo& game) {
	string str;
	int num = rand() % 10 + 1;

	if ((num == 1) || (num == 2)) {
		game.animal_rng(str);
		cout << str << " got sick" << endl;

		if (game.give_funds() < game.health_care_cost(str)) {
			game.death(str);
		}
		else {
			game.health_care(str);
		}

	}
	else if (num == 3) {
		cout << "more visitors have visited your sea lion exhibit than usual" << endl;
		game.bonus();
	}
	else if (num == 4) {
		game.adult_animal_rng(str);
		cout << str << " have given birth" << endl;
		game.birthing(str);
	}
	else {
		cout << "nothing happened this month" << endl;
	}
}

void even_poor(Zoo& game) {
	string str;
	int num = rand() % 10 + 1;

	if ((num >= 1) && (num <= 4)) {
		game.animal_rng(str);
		cout << str << " got sick" << endl;

		if (game.give_funds() < game.health_care_cost(str)) {
			game.death(str);
		}
		else {
			game.health_care(str);
		}

	}
	else if (num == 5) {
		cout << "more visitors have visited your sea lion exhibit than usual" << endl;
		game.bonus();
	}
	else if (num == 6) {
		game.adult_animal_rng(str);
		cout << str << " have given birth" << endl;
		game.birthing(str);
	}
	else {
		cout << "nothing happened this month" << endl;
	}
}

void Food(Zoo& game) {
	string str;
	int num = 0;

	do {
		cout << "this months food cost is: $" << game.give_monthly_food() << endl;
		cout << "what kind of food would you like to feed you animals?" << endl;
		cout << "premium: $" << 2 * game.give_monthly_food() << endl;
		cout << "normal: $" << game.give_monthly_food() << endl;
		cout << "cheap: $" << .5 * game.give_monthly_food() << endl << endl;
		cout << "[1]premium [2]normal [3]cheap" << endl;
		getline(cin, str);
		if (is_digit(str)) {
			cout << "poor input, please try again" << endl;
		}
		else {
			num = stoi(str);
			if ((num == 1) || (num == 2) || (num == 3)) {
				break;
			}
			cout << "poor input, please try again" << endl;
		}
	} while (num != 1);

	game.pay(num);

	if (num == 1) {
		event_premium(game);
	}
	else if (num == 2) {
		event_basic(game);
	}
	else {
		even_poor(game);
	}
}

int stuff(Zoo& game) {
	game.food_rng();
	cout << endl;
	game.zoo_info();
	cout << endl << endl;
	animals(game);
	return input1();
}