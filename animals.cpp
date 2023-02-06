#include "animals.h"

using namespace std;

Animals::Animals() {
}

void Animals::print() {
	cout << "name: " << name << endl;
	cout << "age (months): " << age << endl;
	cout << "babies: " << babies << endl;
	cout << "revenue: " << revenue << endl;
}

int Animals::rev() {
	if (age < 6) {
		return 2;
	}
	else
	{
		return 1;
	}
}

void Animals::age_up() {
	age = age + 1;
}

Animals& Animals::operator=(Animals&) {

}

Animals::~Animals() {

}