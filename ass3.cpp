#include <iostream>
#include <ctime>
#include <string>

using namespace std;

class Animals {
private:

protected:
	int age;
	int babies;
	int revenue;
	int food;

public:
	string name;

	Animals() {
	}

	void print() {
		cout << "name: " << name << endl;
		cout << "age (months): " << age << endl;
		cout << "babies: " << babies << endl;
		cout << "revenue: " << revenue << endl;
	}

	int rev() {
		if (age < 6) {
			return 2;
		}
		else
		{
			return 1;
		}
	}

	void age_up() {
		age = age + 1;
	}

	Animals& operator=(Animals&) {

	}

	~Animals() {

	}
};

class Tiger: public Animals {
private:

public:

	Tiger() : Animals() {
	}

	void info(string str, int Age) {
		name = str;
		age = Age;
		if (Age < 6) {
			revenue = 2000;
			babies = 0;
		}
		else if (Age < 48){
			revenue = 1000;
			babies = 0;
		}
		else {
			revenue = 1000;
			babies = 3;
		}
	}

	int give_age() {
		return age;
	}

	Tiger& operator=(Tiger& s) {
		name = s.name;
		age = s.age;
		babies = s.babies;
		revenue = s.revenue;
		food = s.food;
	}

	~Tiger() {

	}
};

class Sea_Lion: public Animals {
private:
public:
	Sea_Lion() : Animals() {

	}

	void info(string str, int Age) {
		name = str;
		age = Age;
		babies = 1;
		if (Age < 6) {
			revenue = 320;
			babies = 0;
		}
		else if (Age < 48) {
			revenue = 160;
			babies = 0;
		}
		else {
			revenue = 160;
			babies = 1;
		}
	}

	int give_age() {
		return age;
	}

	Sea_Lion & operator=(Sea_Lion& s) {
		name = s.name;
		age = s.age;
		babies = s.babies;
		revenue = s.revenue;
		food = s.food;
	}

	~Sea_Lion() {

	}
};

class Black_Bear: public Animals {
private:
public:
	Black_Bear() : Animals() {

	}

	void info(string str, int Age) {
		name = str;
		age = Age;
		babies = 2;
		if (Age >= 6) {
			revenue = 500;
		}
		else{
			revenue = 1000;
		}
	}

	int give_age() {
		return age;
	}

	Black_Bear & operator=(Black_Bear& s) {
		name = s.name;
		age = s.age;
		babies = s.babies;
		revenue = s.revenue;
		food = s.food;
	}

	~Black_Bear() {

	}
};

class Zoo {
private:
	int num_tiger;
	int num_sea_lion;
	int num_bear;
	float funds;
	float monthly_food;
	float animal_food;
	int tiger_profit;
	int sea_lion_profit;
	int bear_profit;
	static int months;
	int bonus_profit;
public:
	Tiger* exhibit1;
	Tiger* temp1;

	Black_Bear* exhibit2;
	Black_Bear* temp2;

	Sea_Lion* exhibit3;
	Sea_Lion* temp3;

	Zoo() {
		num_tiger = 0;
		tiger_profit = 0;

		num_bear = 0;
		bear_profit = 0;

		num_sea_lion = 0;
		sea_lion_profit = 0;

		exhibit1 = NULL;
		temp1 = NULL;

		exhibit2 = NULL;
		temp2 = NULL;

		exhibit3 = NULL;
		temp3 = NULL;

		funds = 100000;

		months = 0;
		monthly_food = 0;
		animal_food = 0;
		bonus_profit = 0;

	}

	float give_monthly_food() {
		return monthly_food;
	}

	float give_funds() {
		return funds;
	}

	void buy_tiger(int num) {
		string str;

		temp1 = new Tiger[num_tiger];

		for (int i = 0; i < num_tiger; i++) {
			temp1[i] = exhibit1[i];
		}

		delete[] exhibit1;
		exhibit1 = new Tiger[num_tiger + num];

		for (int i = 0; i < num_tiger; i++) {
			exhibit1[i] = temp1[i];
		}
		
		delete[] temp1;

		for (int i = num_tiger; i < num_tiger + num; i++) {
			cout << "enter a name for the animal" << endl;
			getline(cin, str);
			exhibit1[i].info(str, 48);
		}

		num_tiger = num + num_tiger;
		funds = funds - (num * 10000);
	}

	void buy_sea_lion(int num) {
		string str;

		temp3 = new Sea_Lion[num_sea_lion];

		for (int i = 0; i < num_sea_lion; i++) {
			temp3[i] = exhibit3[i];
		}

		delete[] exhibit3;
		exhibit3 = new Sea_Lion[num_sea_lion + num];

		for (int i = 0; i < num_sea_lion; i++) {
			exhibit3[i] = temp3[i];
		}

		delete[] temp3;

		for (int i = num_sea_lion; i < num_sea_lion + num; i++) {
			cout << "enter name for sea lion" << endl;
			getline(cin, str);
			exhibit3[i].info(str, 48);
		}

		num_sea_lion = num + num_sea_lion;
		funds = funds - (num * 800);
	}

	void buy_bear(int num) {
		string str;

		temp2 = new Black_Bear[num_bear];

		for (int i = 0; i < num_bear; i++) {
			temp2[i] = exhibit2[i];
		}
		
		delete[] exhibit2;
		exhibit2 = new Black_Bear[num_bear + num];
		
		for (int i = 0; i < num_bear; i++) {
			exhibit2[i] = temp2[i];
		}
		
		delete[] temp2;

		for (int i = num_bear; i < num_bear + num; i++) {
			cout << "enter name for bear" << endl;
			getline(cin, str);
			exhibit2[i].info(str, 48);
		}
		
		num_bear = num + num_bear;
		funds = funds - (num * 5000);
	}

	void t_birth() {
		int num = 3;
		string str;

		temp1 = new Tiger[num_tiger];

		for (int i = 0; i < num_tiger; i++) {
			temp1[i] = exhibit1[i];
		}

		delete[] exhibit1;
		exhibit1 = new Tiger[num_tiger + num];

		for (int i = 0; i < num_tiger; i++) {
			exhibit1[i] = temp1[i];
		}

		delete[] temp1;

		for (int i = num_tiger; i < num_tiger + num; i++) {
			cout << "enter name for new tiger" << endl;
			getline(cin, str);
			exhibit1[i].info(str, -1);
		}

		num_tiger = num + num_tiger;
	}

	void l_birth() {
		int num = 1;
		string str;
		temp3 = new Sea_Lion[num_sea_lion];

		for (int i = 0; i < num_sea_lion; i++) {
			temp3[i] = exhibit3[i];
		}

		delete[] exhibit3;
		exhibit3 = new Sea_Lion[num_sea_lion + num];

		for (int i = 0; i < num_sea_lion; i++) {
			exhibit3[i] = temp3[i];
		}

		delete[] temp3;

		for (int i = num_sea_lion; i < num_sea_lion + num; i++) {
			cout << "enter name for new sea lion" << endl;
			getline(cin, str);
			exhibit3[i].info(str, -1);
		}

		num_sea_lion = num + num_sea_lion;
	}

	void b_birth() {
		int num = 2;
		string str;

		temp2 = new Black_Bear[num_bear];

		for (int i = 0; i < num_bear; i++) {
			temp2[i] = exhibit2[i];
		}

		delete[] exhibit2;
		exhibit2 = new Black_Bear[num_bear + num];

		for (int i = 0; i < num_bear; i++) {
			exhibit2[i] = temp2[i];
		}

		delete[] temp2;

		for (int i = num_bear; i < num_bear + num; i++) {
			cout << "enter name for new bear" << endl;
			getline(cin, str);
			exhibit2[i].info(str, -1);
		}

		num_bear = num + num_bear;
	}

	void birthing(string str) {
		for (int i = 0; i < num_tiger; i++) {
			if (str == exhibit1[i].name) {
				t_birth();
				break;
			}
		}
		for (int i = 0; i < num_bear; i++) {
			if (str == exhibit2[i].name) {
				b_birth();
				break;
			}
		}
		for (int i = 0; i < num_sea_lion; i++) {
			if (str == exhibit3[i].name) {
				l_birth();
				break;
			}
		}
	}

	void food_rng() {
		monthly_food = (rand() % 33) + 64;
	}

	void pay(int num) {

		if (num == 1) {
			animal_food = monthly_food * (5 * num_tiger + 3 * num_bear + num_sea_lion);
			animal_food = animal_food * 2;
		}
		else if (num == 2) {
			animal_food = monthly_food * (5 * num_tiger + 3 * num_bear + num_sea_lion);
		}
		else if (num == 3) {
			animal_food = monthly_food * (5 * num_tiger + 3 * num_bear + num_sea_lion);
			animal_food = animal_food / 2;
		}
		funds = funds - animal_food;
	}

	void zoo_info() {
		cout << "Month: " << months << endl;
		cout << "funds: " << funds << endl;
		cout << "_______________________" << endl;
		cout << "number of tigers: " << num_tiger << endl;
		cout << "profit from tigers: " << tiger_profit << endl << endl;
		cout << "number of bears: " << num_bear << endl;
		cout << "profit from bears: " << bear_profit << endl << endl;
		cout << "number of sea lions: " << num_sea_lion << endl;
		cout << "profit from sea lions: " << sea_lion_profit << endl << endl;;
		cout << "this month's food costs: " << monthly_food << endl;
		cout << "previous month's total food bill: " << animal_food << endl << endl;
	}

	void animal_info() {
		cout << "tigers:" << endl << endl;
		for (int i = 0; i < num_tiger; i++) {
			exhibit1[i].print();
			cout << endl;
		}
		cout << "_____________________" << endl;
		cout << "bears:" << endl << endl;
		for (int i = 0; i < num_bear; i++) {
			exhibit2[i].print();
			cout << endl;
		}
		cout << "_____________________" << endl << endl;
		cout << "sea lions:" << endl;
		for (int i = 0; i < num_sea_lion; i++) {
			exhibit3[i].print();
			cout << endl;
		}
	}

	void animal_rng(string& str) {
		int z = 1;
		while (z == 1) {
			int x = rand() % 3;

			if ((x == 1) && (num_tiger > 0)) {
				str = exhibit1[rand() % num_tiger].name;
				break;
			}
			else if ((x == 2) && (num_bear > 0)) {
				str = exhibit2[rand() % num_bear].name;
				break;
			}
			else if ((x == 0) && (num_sea_lion > 0)) {
				str = exhibit3[(rand() % num_sea_lion)].name;
				break;
			}
		}
	}

	void adult_animal_rng(string& str) {
		int z = 1;
		int x = 0;
		while (z == 1) {
			int x = rand() % 3;
			if ((x == 1) && (num_tiger > 0)) {
				x = rand() % num_tiger;
				if (exhibit1[x].give_age() >= 48) {
					str = exhibit1[x].name;
					break;
				}
			}
			else if ((x == 2) && (num_bear > 0)) {
				x = rand() % num_bear;
				if (exhibit2[x].give_age() >= 48) {
					str = exhibit2[x].name;
					break;
				}
			}
			else if ((x == 0) && (num_sea_lion > 0)) {
				x = rand() % num_sea_lion;
				if (exhibit3[x].give_age() >= 48) {
					str = exhibit3[x].name;
					break;
				}
			}
		}
	}

	void health_care(string str) {
		for (int i = 0; i < num_tiger; i++) {
			if (str == exhibit1[i].name) {
				if (exhibit1[i].give_age() < 48) {
					cout << "health care for " << exhibit1[i].name << " costed $10,000" << endl;
					funds = funds - 10000;
				}
				else {
					cout << "health care for " << exhibit1[i].name << " costed $5,000" << endl;
					funds = funds - 5000;
				}
			}
		}
		for (int i = 0; i < num_bear; i++) {
			if (str == exhibit2[i].name) {
				if (exhibit2[i].give_age() < 48) {
					cout << "health care for " << exhibit2[i].name << " costed $5,000" << endl;
					funds = funds - 5000;
				}
				else {
					cout << "health care for " << exhibit2[i].name << " costed $2,500" << endl;
					funds = funds - 2500;
				}
			}
		}
		
		for (int i = 0; i < num_sea_lion; i++) {
			if (str == exhibit3[i].name) {
				if (exhibit3[i].give_age() < 48) {
					cout << "health care for " << exhibit3[i].name << " costed $800" << endl;
					funds = funds - 800;
				}
				else {
					cout << "health care for " << exhibit3[i].name << " costed $400" << endl;
					funds = funds - 400;
				}
			}
		}
	}

	int health_care_cost(string str) {
		for (int i = 0; i < num_tiger; i++) {
			if (str == exhibit1[i].name) {
				if (exhibit1[i].give_age() < 6) {
					return 10000;
				}
				else {
					return 5000;
				}
			}
		}
		for (int i = 0; i < num_bear; i++) {
			if (str == exhibit2[i].name) {
				if (exhibit2[i].give_age() < 6) {
					return 5000;
				}
				else {
					return 2500;
				}
			}
		}
		for (int i = 0; i < num_sea_lion; i++) {
			if (str == exhibit3[i].name) {
				if (exhibit3[i].give_age() < 6) {
					return 800;
				}
				else {
					return 400;
				}
			}
		}
	}
	
	void tdie(string str) {
		cout << str << endl;

		temp1 = new Tiger[num_tiger + 1];
		for (int i = 0; i < num_tiger; i++) {
			temp1[i] = exhibit1[i];
		}
		delete[] exhibit1;

		num_tiger = num_tiger - 1;
		exhibit1 = new Tiger[num_tiger];
		for (int i = 0; i < num_tiger; i++) {
			if (temp1[i].name == str) {
				for (int j = i; j < num_tiger; j++) {
					exhibit1[j] = temp1[j + 1];
				}
				break;
			}
			else {
				exhibit1[i] = temp1[i];
			}
		}

		delete[] temp1;
	}

	void sdie(string str) {
		cout << str << endl;

		temp3 = new Sea_Lion[num_sea_lion + 1];
		for (int i = 0; i < num_sea_lion; i++) {
			temp3[i] = exhibit3[i];
		}
		delete[] exhibit3;

		num_sea_lion = num_sea_lion - 1;
		exhibit3 = new Sea_Lion[num_sea_lion];
		for (int i = 0; i < num_sea_lion; i++) {
			if (temp3[i].name == str) {
				for (int j = i; j < num_sea_lion; j++) {
					exhibit3[j] = temp3[j + 1];
				}
				break;
			}
			else {
				exhibit3[i] = temp3[i];
			}
		}

		delete[] temp3;
	}

	void bdie(string str) {
		cout << str << endl;

		temp2 = new Black_Bear[num_bear + 1];
		for (int i = 0; i < num_bear; i++) {
			temp2[i] = exhibit2[i];
		}
		delete[] exhibit2;

		num_bear = num_bear - 1;
		exhibit2 = new Black_Bear[num_bear];
		for (int i = 0; i < num_bear; i++) {
			if (temp2[i].name == str) {
				for (int j = i; j < num_bear; j++) {
					exhibit2[j] = temp2[j + 1];
				}
				break;
			}
			else {
				exhibit2[i] = temp2[i];
			}
		}

		delete[] temp2;
	}

	void death(string str) {
		for (int i = 0; i < num_tiger; i++) {
			if (str == exhibit1[i].name) {
				tdie(str);
			}
		}
		for (int i = 0; i < num_bear; i++) {
			if (str == exhibit2[i].name) {
				bdie(str);
			}
		}

		for (int i = 0; i < num_sea_lion; i++) {
			if (str == exhibit3[i].name) {
				sdie(str);
			}
		}

	}

	void bonus() {
		for (int i = 0; i < num_sea_lion; i++) {
			bonus_profit = bonus_profit + (rand() % 250) + 150;
		}
	}

	void Revenue() {
		tiger_profit = 0;
		bear_profit = 0;
		sea_lion_profit = 0;

		for (int i = 0; i < num_tiger; i++) {
			tiger_profit = (exhibit1[i].rev() * 1000) + tiger_profit;
		}
		for (int i = 0; i < num_bear; i++) {
			bear_profit = (exhibit2[i].rev() * 500) + bear_profit;
		}
		for (int i = 0; i < num_sea_lion; i++) {
			sea_lion_profit = (exhibit3[i].rev() * 160) + sea_lion_profit + bonus_profit;
		}

		funds = funds + tiger_profit + bear_profit + sea_lion_profit;

		bonus_profit = 0;

	}

	void new_turn() {
		months++;
		for (int i = 0; i < num_sea_lion; i++) {
			exhibit3[i].age_up();
		}
		for (int i = 0; i < num_bear; i++) {
			exhibit2[i].age_up();
		}
		for (int i = 0; i < num_tiger; i++) {
			exhibit1[i].age_up();
		}

	}

	Zoo& operator=(Zoo&) {

	}

	~Zoo() {
		delete[] exhibit1;
		delete[] exhibit2;
		delete[] exhibit3;
	}
};

int Zoo::months = 0;

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
	else{}
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