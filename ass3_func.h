#ifndef FUNCT
#define FUNCT
#include "zoo.h"

using namespace std;

/*********************************************************************
	** Function: is_digit
	** Description: determines if input only has digits
	** Parameters: string
	** Pre-Conditions: none
	** Post-Conditions: if string only has digits: false else true
*********************************************************************/
bool is_digit(string str);

/*********************************************************************
	** Function: input1
	** Description: ask user what they want to do
	** Parameters: none
	** Pre-Conditions: none
	** Post-Conditions: returns an int
*********************************************************************/
int input1();

/*********************************************************************
	** Function: input2()
	** Description: ask user what they want to buy
	** Parameters: none
	** Pre-Conditions: user chooses to buy an animal
	** Post-Conditions: prompts user how many animals user wants
*********************************************************************/
int input2();

/*********************************************************************
	** Function: input3()
	** Description: asks how many animals the user wants to buy
	** Parameters: none
	** Pre-Conditions: user wants to buy an animal
	** Post-Conditions: animal is added to exhibit
*********************************************************************/
int input3();

/*********************************************************************
	** Function: animals
	** Description: asks user if they want to see info on their animals
	** Parameters: zoo
	** Pre-Conditions: none
	** Post-Conditions: displays all animal's information
*********************************************************************/
void animals(Zoo& game);

/*********************************************************************
	** Function: buy()
	** Description: routes the zoo to buy a specific animal
	** Parameters: zoo
	** Pre-Conditions: user asks to buy an animal
	** Post-Conditions: animal is added to exhibit
*********************************************************************/
void buy(Zoo& game);

/*********************************************************************
	** Function: event_premium()
	** Description: chances for events when premium food is chosen
	** Parameters: game
	** Pre-Conditions: premium food is chosen
	** Post-Conditions: random even is chosen
*********************************************************************/
void event_premium(Zoo& game);

/*********************************************************************
	** Function: event_basic()
	** Description: chances for events when basic food is chosen
	** Parameters: game
	** Pre-Conditions: basic food is chosen
	** Post-Conditions: random event is chosen
*********************************************************************/
void event_basic(Zoo& game);

/*********************************************************************
	** Function: even_poor
	** Description: chances for events when cheap food is chosen
	** Parameters: game
	** Pre-Conditions: cheap food is chosen
	** Post-Conditions: random event is chosen
*********************************************************************/
void even_poor(Zoo& game);

/*********************************************************************
	** Function: food()
	** Description: buys the food for animals and subtract food cost from 
	* funds
	** Parameters: game
	** Pre-Conditions: none
	** Post-Conditions: food pay is deleted from funds
*********************************************************************/
void Food(Zoo& game);

/*********************************************************************
	** Function: stuff
	** Description: shortens main function
	** Parameters: game
	** Pre-Conditions: none
	** Post-Conditions: continues with the game
*********************************************************************/
int stuff(Zoo& game);
#endif // !FUNCT
