#ifndef ZOO
#define ZOO
#include "tiger.h"
#include "bear.h"
#include "seal.h"

using namespace std;

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

/*********************************************************************
** Function: zoo()
** Description: zoo constructor
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: all variables are set to something
*********************************************************************/
	Zoo();

/*********************************************************************
** Function: give_monthly_food()
** Description: returns monthly food cost
** Parameters: none
** Pre-Conditions: random food rng must be ran
** Post-Conditions: returns the cost of the food this month
*********************************************************************/
	float give_monthly_food();

/*********************************************************************
** Function: give_funds
** Description: returns the amount of mouney user has
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: returns funds
*********************************************************************/
	float give_funds();

/*********************************************************************
** Function: buy_tiger
** Description: adds a tiger into array and subtracts costs from funds
** Parameters: num
** Pre-Conditions: none
** Post-Conditions: another tiger is in the array
*********************************************************************/
	void buy_tiger(int num);

/*********************************************************************
** Function: buy_sea_lion
** Description: increase sea lion array by one and funds are removed
** Parameters: num
** Pre-Conditions: none
** Post-Conditions: sea lion array increased by one
*********************************************************************/
	void buy_sea_lion(int num);

/*********************************************************************
** Function: buy bear
** Description: increase sea lion array by one and funds are subtracted
** Parameters: number of sea lions
** Pre-Conditions: none
** Post-Conditions: number of arrays are created for sea lions
*********************************************************************/
	void buy_bear(int num);

/*********************************************************************
** Function: t_birth
** Description: adds another array to tiger
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: array is added
*********************************************************************/
	void t_birth();

/*********************************************************************
** Function: l_brith()
** Description: add an array to sea lion array
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: array of sea lion increased by one
*********************************************************************/
	void l_birth();

/*********************************************************************
** Function: b_birth
** Description: increase size of bear array by 2
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: array is increased by 3
*********************************************************************/
	void b_birth();

/*********************************************************************
** Function: birthing
** Description: determines which another give birth
** Parameters: ame of animal that gives birth
** Pre-Conditions: rng must give an adult animal
** Post-Conditions: routes the animal to increase array
*********************************************************************/
	void birthing(string str);

/*********************************************************************
** Function: food_rng
** Description: determines monthly food cost
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: gives a value for monthly food cost
*********************************************************************/
	void food_rng();

/*********************************************************************
** Function: pay
** Description: pays animal food
** Parameters: num
** Pre-Conditions: monthly food cost must be determined
** Post-Conditions: cost for food is deducted
*********************************************************************/
	void pay(int num);

/*********************************************************************
** Function:zoo_info
** Description: prints information of the zoo
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: information is displayed
*********************************************************************/
	void zoo_info();

/*********************************************************************
** Function:animal_info()
** Description: displays information of animals
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: animal information is displayed
*********************************************************************/
	void animal_info();

/*********************************************************************
** Function:animal_rng
** Description: chooses a random animal
** Parameters: name
** Pre-Conditions: none
** Post-Conditions: an animal is selected
*********************************************************************/
	void animal_rng(string& str);

/*********************************************************************
** Function: adult_animal_rng
** Description: select a random adult animal
** Parameters: name
** Pre-Conditions: none
** Post-Conditions: a random adult is selected
*********************************************************************/
	void adult_animal_rng(string& str);

/*********************************************************************
** Function: health_care
** Description: pays for animal health care
** Parameters: name
** Pre-Conditions: an animal is selected to be sick
** Post-Conditions: cost is deducted from funds
*********************************************************************/
	void health_care(string str);

/*********************************************************************
** Function: health_care_cost
** Description: pays for animal health care
** Parameters: name
** Pre-Conditions: an animal is selected to be sick
** Post-Conditions: cost is deducted from funds
*********************************************************************/
	int health_care_cost(string str);

/*********************************************************************
** Function: tdie
** Description: removes a tiger from the array
** Parameters: name
** Pre-Conditions: none
** Post-Conditions: array is shortened by one
*********************************************************************/
	void tdie(string str);

/*********************************************************************
** Function: sdie
** Description: removes a sea lion from game
** Parameters: name
** Pre-Conditions: none
** Post-Conditions: a sea lion with a specific name is removed
*********************************************************************/
	void sdie(string str);

/*********************************************************************
** Function: bdie
** Description: removes a bear from th game
** Parameters: name
** Pre-Conditions: none
** Post-Conditions: a specific bear with a spefic name is removed
*********************************************************************/
	void bdie(string str);

/*********************************************************************
** Function: death
** Description: choose which animal to die
** Parameters: name
** Pre-Conditions: none
** Post-Conditions: determines which animal dies
*********************************************************************/
	void death(string str);

/*********************************************************************
** Function: bonus
** Description: sea lion exhibit revenue bonus
** Parameters: none
** Pre-Conditions: sea lion event occurs
** Post-Conditions: a random amount of money is created per sea lion 
*********************************************************************/
	void bonus();

/*********************************************************************
** Function: revenue
** Description: determines amount of money and adds to funds
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: funds is updated
*********************************************************************/
	void Revenue();

/*********************************************************************
** Function: new_turn
** Description: increase age of all animals and documents months
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: age and month is updated
*********************************************************************/
	void new_turn();

/*********************************************************************
** Function: operator=
** Description: assignment operator overload
** Parameters: none 
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/
	Zoo& operator=(Zoo&);

/*********************************************************************
** Function: ~Zoo
** Description: frees dynamic memory
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: all memory is freed
*********************************************************************/
	~Zoo();
};



#endif // !1
