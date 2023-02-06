#ifndef BEAR
#define BEAR
#include "animals.h"

using namespace std;

class Black_Bear : public Animals {
private:
public:

/*********************************************************************
	** Function: black_bear()
	** Description: constructor for bear
	** Parameters: none
	** Pre-Conditions: none
	** Post-Conditions: none
*********************************************************************/
	Black_Bear();

/*********************************************************************
	** Function: balck_bear_info()
	** Description: creates infor for a bear
	** Parameters: name, age
	** Pre-Conditions: none
	** Post-Conditions: a bear is created
*********************************************************************/
	void info(string str, int Age);

/*********************************************************************
	** Function: give_age
	** Description: returns age
	** Parameters: none
	** Pre-Conditions: none
	** Post-Conditions: age is given
*********************************************************************/
	int give_age();

/*********************************************************************
	** Function: assignment operator overload
	** Description: none
	** Parameters: none
	** Pre-Conditions: none
	** Post-Conditions: none
*********************************************************************/
	Black_Bear& operator=(Black_Bear& s);

/*********************************************************************
	** Function: ~black_bear
	** Description: destructor
	** Parameters: none
	** Pre-Conditions: none
	** Post-Conditions: none
*********************************************************************/
	~Black_Bear();
};
#endif // !BEAR
