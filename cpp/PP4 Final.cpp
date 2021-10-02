/*
Eric Muniz
PP 4
Project 1&2 for 110 points
Calculates MPG 
*/
#include <iostream>
using namespace std;
// The global variable decloration and initialization 
const double liter=0.264179;
// Funtion Declortation
double mpg(double l1,double m1);
// Function calculates mpg with 2 user inputs. 
int main() {
	
	double gas1, gas2, mile1, mile2, mpg1, mpg2, count=0.0, x=0;
	char y;
	
	cout << "This program will determine the miles per gallon for 2 vehicles.\n";
	// Program explination
	// Loop consists of user inputs and loop option
	do{ 
		cout << "Vehicle 1:\nHow many liters of gas will be used?\n";
		cin >> gas1;
		cout << "How many miles will be traveled?\n";
		cin >> mile1;
		
		cout << "Vehicle 2:\nHow many liters of gas will be used?\n";
		cin >> gas2;
		cout <<"How many miles will be traveled?\n";
		cin >> mile2;
		
		//Function calls
		mpg1=mpg(gas1,mile1);
		mpg2=mpg(gas2,mile2);
		
		cout << "Vehicle 1 will get " << mpg1 << " miles per gallon.\n";
		cout << "Vehicle 2 will get " << mpg2 << " miles per gallon.\n";
		// Program will tell user which vehicle gets better mpg.
		if(mpg1>mpg2){
			cout << "Vehicle 1 will get more miles per gallon.\n";
		}
		else if(mpg1<mpg2){
			cout << "Vehicle 2 will get more miles per gallon.\n";
		}
		else{
			cout << "Both vehicle 1 and vehicle 2 will have the same miles per gallon.\n";	}
		// Option to leave or stay in loop.
		do{
			x=0;
			cout << "Would you like to make different calculations?\nYes=Y\nNo=N\n";
			cin >> y;
			if(y=='Y' || y=='y'){
				cout << "Ok reseting numbers!\n";
				x++;
			}
			else if(y=='N' || y=='n'){
				cout << "Ok program ending.\n";
				count++;
				x++;
			}
			else{
				cout << "Please input a propor response.\n";
			}
		}while(x<1);
		
	}while(count<1);
	
	return 0;
}

// Function Definition
double mpg(double l1,double m1){
	return (m1/(l1*liter));
}