#include "zoo.h"

using namespace std;

Zoo::Zoo() {
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

float Zoo::give_monthly_food() {
	return monthly_food;
}

float Zoo::give_funds() {
	return funds;
}

void Zoo::buy_tiger(int num) {
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

void Zoo::buy_sea_lion(int num) {
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

void Zoo::buy_bear(int num) {
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

void Zoo::t_birth() {
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

void Zoo::l_birth() {
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

void Zoo::b_birth() {
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

void Zoo::birthing(string str) {
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

void Zoo::food_rng() {
	monthly_food = (rand() % 33) + 64;
}

void Zoo::pay(int num) {

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

void Zoo::zoo_info() {
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

void Zoo::animal_info() {
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

void Zoo::animal_rng(string& str) {
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

void Zoo::adult_animal_rng(string& str) {
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

void Zoo::health_care(string str) {
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

int Zoo::health_care_cost(string str) {
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

void Zoo::tdie(string str) {
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

void Zoo::sdie(string str) {
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

void Zoo::bdie(string str) {
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

void Zoo::death(string str) {
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

void Zoo::bonus() {
	for (int i = 0; i < num_sea_lion; i++) {
		bonus_profit = bonus_profit + (rand() % 250) + 150;
	}
}

void Zoo::Revenue() {
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

void Zoo::new_turn() {
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

Zoo& Zoo::operator=(Zoo&) {

}

Zoo::~Zoo() {
	delete[] exhibit1;
	delete[] exhibit2;
	delete[] exhibit3;
}

int Zoo::months = 0;