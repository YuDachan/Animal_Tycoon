#ifndef ANIMALS
#define ANIMALS
#include <iostream>
#include <string>
#include <ctime>

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

	/*********************************************************************
	** Function: Animals
	** Description: default constructor
	** Parameters: none
	** Pre-Conditions: none
	** Post-Conditions: none
	*********************************************************************/
	Animals();

	/*********************************************************************
	** Function: print()
	** Description: prints animal information
	** Parameters: none
	** Pre-Conditions: none
	** Post-Conditions: displays animal information
	*********************************************************************/
	void print();

	/*********************************************************************
	** Function: rev()
	** Description: revenue factor, determines if revenue produced by animal
	* needs to be doubled
	** Parameters: none
	** Pre-Conditions: none
	** Post-Conditions: return 1 or 2
	*********************************************************************/
	int rev();

	/*********************************************************************
	** Function: age_up()
	** Description: increases the age of animals
	** Parameters: none
	** Pre-Conditions: none
	** Post-Conditions: animal age +1
	*********************************************************************/
	void age_up();

	/*********************************************************************
	** Function: assignment operator overload
	** Description: copies all info from one object to another
	** Parameters: none
	** Pre-Conditions: none
	** Post-Conditions: info is copied
	*********************************************************************/
	Animals& operator=(Animals&);

	/*********************************************************************
	** Function: ~animals()
	** Description: destructor
	** Parameters: none
	** Pre-Conditions: none
	** Post-Conditions: none
	*********************************************************************/
	~Animals();
};


#endif // !ANIMALS
