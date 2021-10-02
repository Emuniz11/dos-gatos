/*Eric Muniz
  PP 8 
  Username Creator (with set loop)
*/
#include <iostream>
#include<string>
using namespace std;
//I used a const to control the loop
const int USERS=4;

int main() {
	//I created a "period" variable to add in concatenation to the middle initial
	//The string variable username[] will store all created user names
	string full, full_save, first, middle, last, period=".", username[USERS];
	//These int variables are used to store indexes of their corresponding string variable
	int i,f,m,l,fml;
	//This is the initial message that explains what this program does to the user
	cout << "This program creates a username using your full name.\n\t  (*Creates " << USERS << " usernames at a time*)\n\n";
	//Here is where the loop starts that has the actual program
	for (int v=0;v<USERS;v++){
		cout << "What is your full name User " << (v+1) << "?\n";
		getline(cin,full);
		//Created a save variable for full(name) because I erase parts of the original later on
		//i is used to store the index of the full name 
		full_save=full;
		i=full.length();
		//This is where the first name is created
		//I found it easier to just erase the first name and find the middle/last
		f=full.find(' ');
		first=full.substr(0,f);
		full.erase(0,f+1);
		//This starts the middle name cut out 
		m=full.find(' ');
		middle=full.substr(0,m);
		//Again I just delete the middle name to create the last name
		//Used period in concatenation with middle to easily create the period needed  
		middle.erase(1,20);
		middle+=period;
		//This is where the last name is created and stored similarly to the middle/first name process
		full.erase(0,m+1);
		last=full;
		l=full.length();
		//These if/else statements are hugely important because they fixes the problem if a user enters just one letter as their middle name
		if(m==1){
			m+=1;
		}
		else if(m==-1){
			m-=1;
		}
		//Also fixes problem when full.length() counts spaces
		else if(m>1){
			i-=2;
		}
		//More correction to index variables 
		if(l==-1){
			m--;
		}
		else if(l>1){
			i-=1;
		}
		//This will catch any user error that does not input a full name (at least 2 names seperated by spaces) and subtracts from the loop control variable
		if(f==-1 && m==-2){
			cout << "\t  " << "::PLEASE INPUT FULL NAME::" << endl << endl;
			v--;
		}
		//This else if statement creates the username for users that only input a 2 name length full name (one space)
		//Also stores this username in the array username[] with the appropriate index
		else if((f+m+l)<(i)){
			middle.erase(1,1);
			cout << "\t  " << "UN" << (v+1) << ": " << middle << ", " << first << endl << endl;
			username[v]=middle+", "+first;
		}
		//This else statement creates the user name for users that input a 3 name length full name (two space)
		//Also stores this username in the array username[] with the appropriate index
		else{
			//This if statement account for users inputing their own period behinde there middle initial
			if(middle.at(1)=='.'){
				middle.erase(2,1);
			}
			cout << "\t  " << "UN" << (v+1) << ": " << last << ", " << first << " " << middle << endl << endl;
			username[v]=last+", "+first+" "+middle;
		}
	}
	//I decided to show all usernames created in a list 
	cout << "Created Usernames:\n";
	for(int v=0;v<USERS;v++){
		cout << (v+1) << ". " << username[v] << endl;
	}
	
	return 0;
}