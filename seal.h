#ifndef SEA_LION
#define SEA_LION
#include "animals.h"

using namespace std;

class Sea_Lion : public Animals {
private:
public:
/*********************************************************************
	** Function: Sea_Lion
	** Description: sea lion constructor
	** Parameters: none
	** Pre-Conditions: none
	** Post-Conditions: none
*********************************************************************/
	Sea_Lion();

/*********************************************************************
	** Function: info
	** Description: updates info for a specific sea lion
	** Parameters: name, age
	** Pre-Conditions: none
	** Post-Conditions: an animal's info is updated
*********************************************************************/
	void info(string str, int Age);

/*********************************************************************
	** Function: give_age
	** Description: returns age of animal
	** Parameters: none 
	** Pre-Conditions: none
	** Post-Conditions: age is given
*********************************************************************/
	int give_age();

/*********************************************************************
	** Function: operator=
	** Description: assignment operator overload
	** Parameters: none
	** Pre-Conditions: none
	** Post-Conditions: none
*********************************************************************/
	Sea_Lion& operator=(Sea_Lion& s);

/*********************************************************************
	** Function: ~sea_lion
	** Description: destructor
	** Parameters: none
	** Pre-Conditions: none
	** Post-Conditions: none
*********************************************************************/
	~Sea_Lion();
};

#endif // !SEAL_LION
