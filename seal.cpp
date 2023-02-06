#include "seal.h"

using namespace std;

Sea_Lion::Sea_Lion() : Animals() {

}

void Sea_Lion::info(string str, int Age) {
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

int Sea_Lion::give_age() {
	return age;
}

Sea_Lion& Sea_Lion::operator=(Sea_Lion& s) {
	name = s.name;
	age = s.age;
	babies = s.babies;
	revenue = s.revenue;
	food = s.food;
}

Sea_Lion::~Sea_Lion() {

}