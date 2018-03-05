// lab 19 Q1
// programmed by;Gayatri patel
#include <iostream>
#include <string>
using namespace std;

enum sizes { SMALL, MEDIUM, LARGE, JUMBO };  
// function prototype
int getSizeOption();
float getDrinkPrice(sizes drinkSize);
float getPopCornPrice(sizes popcornSize);

int main()     //function main
{
	sizes popcornSize, drinkSize;

	cout << "...........MENU............   " << endl;
	cout << "         Popcorn      soda " << endl;
	cout << "Small    $1.25        $1.50 " << endl;
	cout << "Medium   $2.25        $2.50 " << endl;
	cout << "Large    $3.50        $3.75 " << endl;
	cout << "jumbo    $4.25        $4.50 " << endl;
	cout << "............................  " << endl;
	cout << endl;
	int option;
	cout << "What size of popcorn do you want? " << endl;
	option = getSizeOption();  //calling function to get size option
	popcornSize = sizes(option);
	cout << "What size of drink do you want? " << endl;
	option = getSizeOption(); //calling function to get size option
	drinkSize = sizes(option);
	float popCornPrice;
	popCornPrice = getPopCornPrice(popcornSize); // calling function to get popcorn prize
	float drinkPrice;
	drinkPrice = getDrinkPrice(drinkSize);     // calling function to get drink price
	cout << endl;
	cout << "Popcorn Cost: $" << popCornPrice << endl;
	cout << "Soda Cost: $" << drinkPrice << endl;
	cout << endl;
	cout << "Total Cost: $" << drinkPrice + popCornPrice << endl;   // total of popcorn and drink price
	cout << endl;
	return 0;
}
int getSizeOption()      //function to get size options
{
	while (true)
	{
		cout << "for Small  enter: 0" << endl;
		cout << "For Medium enter: 1" << endl;
		cout << "For Large  enter: 2" << endl;
		cout << "For Jumbo  enter: 3" << endl;
		cout << "Choose a size: ";
		int size;
		cin >> size;
		if (size < 0 || size > 3)
		{
			cout << "Invalid choice. Try again!!" << endl;
		}
		else
		{
			return size;
		}
	}
}
float getPopCornPrice(sizes popcornSize)  //function to calculate popcornprize
{
	float popCornPrice = 0;
	switch (popcornSize)
	{
	case sizes(SMALL):
		popCornPrice = 1.25;
		break;
	case sizes(MEDIUM):
		popCornPrice = 2.25;
		break;
	case sizes(LARGE):
		popCornPrice = 3.50;
		break;
	case sizes(JUMBO):
		popCornPrice = 4.25;
		break;
	}
	return popCornPrice;
}

float getDrinkPrice(sizes drinkSize)    // function to calculate drinkprice
{
	float drinkPrice = 0, popCornPrice = 0;
	switch (drinkSize)
	{
	case sizes(SMALL):
		drinkPrice = 1.50;
		break;
	case sizes(MEDIUM):
		drinkPrice = 2.50;
		break;
	case sizes(LARGE):
		drinkPrice = 3.75;
		break;
	case sizes(JUMBO):
		drinkPrice = 4.50;
		break;
	}
	return drinkPrice;
}
