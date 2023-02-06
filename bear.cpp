#include "bear.h"

using namespace std;

Black_Bear::Black_Bear() : Animals() {

}

void Black_Bear::info(string str, int Age) {
	name = str;
	age = Age;
	babies = 2;
	if (Age >= 6) {
		revenue = 500;
	}
	else {
		revenue = 1000;
	}
}

int Black_Bear::give_age() {
	return age;
}

Black_Bear& Black_Bear::operator=(Black_Bear& s) {
	name = s.name;
	age = s.age;
	babies = s.babies;
	revenue = s.revenue;
	food = s.food;
}

Black_Bear::~Black_Bear() {

}