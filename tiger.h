#ifndef TIGER
#define TIGER
#include "animals.h"

using namespace std;

class Tiger : public Animals {
private:

public:

/*********************************************************************
** Function: tiger()
** Description: tiger constructor
** Parameters: none
** Pre-Conditions: none 
** Post-Conditions: none
*********************************************************************/
	Tiger();

/*********************************************************************
** Function: info
** Description: inputs info for a specific tiger
** Parameters: name, age
** Pre-Conditions: none
** Post-Conditions: a tiger is made
*********************************************************************/
	void info(string str, int Age);

/*********************************************************************
** Function: give_age
** Description: returns age
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: returns age
*********************************************************************/
	int give_age();

/*********************************************************************
** Function: operator=
** Description: assignment operator overload
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/
	Tiger& operator=(Tiger& s);

/*********************************************************************
** Function: ~tiger
** Description: destructor
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/
	~Tiger();
};
#endif // !TIGER
