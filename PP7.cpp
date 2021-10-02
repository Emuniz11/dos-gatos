/*Eric Muniz 
 PP 7
 Rainfall and Average Rainfall Over 12 Months
*/
#include <iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;
//Made MONTH a const because there is ONLY 12 months in a year.
const int MONTH=12;

int main() {
	//Initialized actual_r[Month] to the actual average rainfall for that specific month. Arrays use the const MONTH as their index.
	double avrg_r[MONTH], actual_r[MONTH]={2.2,2.2,2.9,2.5,4.2,5.1,2.9,2.2,3.4,4.3,3.2,2.3}, difference[MONTH];
	//Int Variable Description: Pathway option/loop control/playback option 
	int answ, i=0, reset;
	string month[12]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
	srand(time(0));
	
	//Actual average precipitation in San Antonio, Texas measured in inches.
	cout << "This program shows you the average rainfall each month of the year in San Antonio Texas\nand then shows you the actual rainfal for each month measured in inches.\n";
	do{//This starts the loop that has a reset option
		reset=1;
		cout << "Would you like to view the bar graph, the table, or both? Please input the corresponding number:\nBar Graph=1\t\tTable=2\t\tBoth=3\n";
		cin >> answ;
		//These for loops will generate an appropriate random numer to be used as the most recent average rainfall per month with the third for loop calculating the 		differnece between the two.
		for(i=0;i<MONTH;i++){
			avrg_r[i]=(rand()%30)+5;
		}
		for(i=0;i<MONTH;i++){
			avrg_r[i]=avrg_r[i]*.1;
		}
		for(i=0;i<MONTH;i++){
			difference[i]=actual_r[i]-avrg_r[i];
		}
		//Option 1: Shows Bar Graph
		if (answ==1){
			cout << "Bar Graph:\n";
			for (i=0;i<MONTH;i++){
				cout << "\n----------------------------------\n";
				cout << endl << month[i] << ":\n";
				cout << "\t\tCurrent Avg:\t";
				for (int p=0;p<avrg_r[i];p++){
					cout << "*";
				}
				cout << endl << endl;
				cout << "\t\tActual Avg:\t\t";
				for (int k=0;k<actual_r[i];k++){
					cout << "*";
				}
				cout <<  endl;
				}
				cout << "\n----------------------------------\n";
		}
		//Option 2: Show Table
		else if (answ==2){
			cout << "\n---------------------------------------------------\n";
			cout << "Table:\n";
			cout << "Month:\tCurrent Avg:\tActual Avg:\t\tDifference:\n";
			for(i=0;i<MONTH;i++){
				cout << month[i] << "\t\t\t" << avrg_r[i] << "\t\t\t\t" << actual_r[i] << "\t\t\t\t" << difference[i] << endl;
			}
			cout << "\n---------------------------------------------------\n";
			cout << endl;
		}
		//Option 3: Shows both bar graph and table
		else if (answ==3){
			cout << "Bar Graph:\n";
			for (i=0;i<MONTH;i++){
				cout << "\n----------------------------------\n";
				cout << endl << month[i] << ":\n";
				cout << "\t\tCurrent Avg:\t";
				for (int p=0;p<avrg_r[i];p++){
					cout << "*";
				}
				cout << endl << endl;
				cout << "\t\tActual Avg:\t\t";
				for (int k=0;k<actual_r[i];k++){
					cout << "*";
				}
				cout <<  endl;
			}
			cout << "\n---------------------------------------------------\n";
			cout << "Table:\n";
			cout << "Month:\tCurrent Avg:\tActual Avg:\t\tDifference:\n";
			for(i=0;i<MONTH;i++){
				cout << month[i] << "\t\t\t" << avrg_r[i] << "\t\t\t\t" << actual_r[i] << "\t\t\t\t" << difference[i] << endl;
			}
			cout << "\n---------------------------------------------------\n";
			cout << endl;
		}
		//Saftey else statment to prevent run time errors
		else {
			cout << "Incorrect input...\n";
		}
		//Reset or end option with a saftey if statement to prevent run time errors
		for (int i=0;i<1;i++)
		if (answ==1 || answ==2 || answ==3){
			cout << "Would you like to reset?\nYes=1\t\tNo=2\n";
			cin >> reset;
			if (reset!=1 && reset!=2){
				cout << "Incorect input...\n";
				i--;
			}
		}
	}while(reset<2);
		
	return 0;
}