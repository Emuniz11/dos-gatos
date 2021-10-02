/*
Eric Muniz
PP 5 (Hard Version)
Room Occupancy Regulation
*/

#include <iostream>
using namespace std;

int main() 
{
	/* mrc = Maximum Room Capacity && noa = Number of Attending */
	int mrc=25, noa, count=0, plus, minus;
	cout << "Hello! \n" << "This is a program to determine weather or not you can hold a meeting in the \"Impala\" building. \n";
	/* Everything past the user description will be looped so not too much text will be repeated */
	while (count<10000)
	{
		cout << "\n\nHow many people are planning on attending? \n";
		cin >> noa;
		/* plus = How Many More && minus = How Many Less */
		plus = 25-noa;
		minus = noa-25;
	if (noa<=mrc)
	{	/* I used \n before the sentance to give a cleaner appearance when executing */
		cout << "\nYou are legally eligible to hold the meeting in our building. \n";
		cout << "You can invite " << plus << " more people. \n";
	}
	else  
	{
		cout << "\nThis meeting cannot be held due to fire regulations. \n";
		cout << "To abide by regulations, you need " << minus;
		/* Created if/else to correct the grammar mistake when executing */
		if (minus<=1)
		{
			cout << " less person. \n";
		}
		else 
		{
			cout << " less people. \n";
		}
	}
	count +=1;
	}
	/* Fun project! */
	return 0;
}
