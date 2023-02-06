#include "tiger.h"

using namespace std;

Tiger::Tiger() : Animals() {
}

void Tiger::info(string str, int Age) {
	name = str;
	age = Age;
	if (Age < 6) {
		revenue = 2000;
		babies = 0;
	}
	else if (Age < 48) {
		revenue = 1000;
		babies = 0;
	}
	else {
		revenue = 1000;
		babies = 3;
	}
}

int Tiger::give_age() {
	return age;
}

Tiger& Tiger::operator=(Tiger& s) {
	name = s.name;
	age = s.age;
	babies = s.babies;
	revenue = s.revenue;
	food = s.food;
}

Tiger::~Tiger() {

}