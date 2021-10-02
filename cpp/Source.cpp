/*	Eric Muniz
	Project 1
	How much moeny a bar will make in one night selling one type of drink.
	I am a bartender. */

#include <iostream>
using namespace std;

int main ()	{

	int price_of_drink, number_of_drinks, total_income;
	
	cout << "We are going to find out how much money we will make off of this one type of drink. \n";

	system ("pause");

	cout << "How much is each drink: \n";
	cin >> price_of_drink;

	cout << "How many drinks did you sell? \n";
	cin >> number_of_drinks;

	total_income = price_of_drink * number_of_drinks;

	cout << "So, if you're drinks cost $" << price_of_drink << ", \n";

	cout << "and you sell " << number_of_drinks << " drinks, \n";

	cout << "then you will make $" << total_income << " a night. ";
	
	system ("pause");

	return 0; }

	