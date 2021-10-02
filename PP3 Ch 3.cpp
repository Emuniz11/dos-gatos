/*
Eric Muniz
PP 3
Rock Paper Scissors Game
*/
//#include <iostream>
using namespace std;

int main() 
{	// I had to initiate all int variables because they will be updated from 0 or 1.
	char blueanswer, redanswer, again, draw;
	int count=0, turn=1, redscore=0, bluescore=0;
	// Title and rules on how to play are explained here.
	cout << "This is a Rock Paper Scissors Game!\n";
	cout << "The rules are simple. Best 2 out of 3 wins. Player Blue goes first then Player Red.\n";
	cout << "This is how to input answers:\nRock: \t\tR or r\nPaper: \t\tP or p\nScissors: \tS or s\n";
	
	// Set loop condition so that it is almost impossible to end the loop without asking first.
	while (count<100000000)
	{	// I reinitiate int variables so that it resets for every loop.
	turn=1;
	bluescore=0;
	redscore=0;
		// Set condition so that one match consists of three rounds.
		while (turn<=3)
		{
			cout << "Blue Player choose your answer for turn " << turn << ".\n";
			cin >> blueanswer;
			
			cout << "Red Player choose your answer for turn " << turn << ".\n";
			cin >> redanswer;
			// Found that the switch ststement worked best for this project because there are specific condidtions that will be met.
			switch (blueanswer)
			{	// I chose to go off the blueanswer variable but could have done the same with redanswer variable.
				case 'R':	// In each case there is a seperate case for upper or lower case char inputs.
				case 'r':
				{
					if (redanswer=='P' || redanswer=='p')
					{
						cout << "Paper covers Rock. Point for Red Player.\n";
						redscore++;
					}	// Judging on which player won will determine which variable is incriminated by 1.
					else if (redanswer=='S' || redanswer=='s')
					{
						cout << "Rock crushes Scissors. Point for Blue Player.\n";
						bluescore++;
					}
					else if (redanswer=='R' || redanswer=='r')
					{	// Since there is the possibility of having a draw I included it in within the loop thats within the switch. 
						cout << "Draw!\n";
						// I do give an option to keep it a draw in which no player gets points or a retry.
						cout << "Would you like to re-do this round?\n";
						cin >> draw;
						if (draw=='Y' || draw=='y')
						{	// If the user decides on a retry then the turn variable is decremented.
							turn--;
						}
						else if (draw=='N' || draw=='n')
						{
							cout << "Ok! Round ends in a draw. No point awarded.\n";
						}
					}
					else 
					{
						cout << "Red Player please input a correct answer.\n";
						turn--;
						cout << "Turn reset.\n";
					}
					break;
				}
					// For each blueanswer case there is 2 redanswer if/else statements folowed by a draw else statement.
				case 'S':
				case 's':
				{
					if (redanswer=='P' || redanswer=='p')
					{
						cout << "Scissors cut Paper. Point for Blue Player.\n";
						bluescore++;
					}
					else if (redanswer=='R' || redanswer=='r')
					{
						cout << "Rock crushes Scissors. Point for Red Player.\n";
						redscore++;
					}
					else if (redanswer=='S' || redanswer=='s')
					{
						cout << "Draw!\n";
						
						cout << "Would you like to re-do this round?\n";
						cin >> draw;
						if (draw=='Y' || draw=='y')
						{
							turn--;
						}
						else if (draw=='N' || draw=='n')
						{
							cout << "Ok! Round ends in a draw. No point awarded.\n";
						}
					}
					else 
					{
						cout << "Red Player please input a correct answer.\n";
						turn--;
						cout << "Turn reset.\n";
					}					
					break;
				}
				case 'P':
				case 'p':
				{	
					if (redanswer=='R' || redanswer=='r')
					{
						cout << "Paper covers Rock. Point for Blue Player.\n";
						bluescore++;
					}
					else if (redanswer=='S' || redanswer=='s')
					{
						cout << "Scissors cut Paper. Point for Red Player.\n";
						redscore++;
					}
					else if (redanswer=='P' || redanswer=='p')
					{
						cout << "Draw!\n";
						cout << "Would you like to re-do this round?\n";
						cin >> draw;
						if (draw=='Y' || draw=='y')
						{
							turn--;
						}
						else if (draw=='N' || draw=='n')
						{
						cout << "Ok! Round ends in a draw. No point awarded.\n";
						}
					}
					else 
					{
						cout << "Red Player please input a correct answer.\n";
						turn--;
						cout << "Turn reset.\n";
					}	
					break;
				}	
				case 'A':
				case 'a':
				case 'B':
				case 'b':
				case 'C':
				case 'c':
				case 'D':
				case 'd':
				case 'E':
				case 'e':
				case 'F':
				case 'f':
				case 'G':
				case 'g':
				case 'H':
				case 'h':
				case 'I':
				case 'i':
				case 'J':
				case 'j':
				case 'K':
				case 'k':
				case 'L':
				case 'l':
				case 'M':
				case 'm':
				case 'N':
				case 'n':
				case 'O':
				case 'o':
				case 'Q':
				case 'q':
				case 'T':
				case 't':
				case 'U':
				case 'u':
				case 'V':
				case 'v':
				case 'W':
				case 'w':
				case 'X':
				case 'x':
				case 'Y':
				case 'y':
				case 'Z':
				case 'z':
				{
					cout << "Blue Player please input a correct answer.\n";
					turn--;
					cout << "Turn reset.\n";
					break;
				}
				// Lots of curley braces here. However, as long as these are indented properly it is easy to follow.
			}
			// Made extra space here to make the scoring and winner output more clear.
			cout << endl<<endl;
			turn++;
		}
		// I post both players score at the end.
		// At first this was just to make sure my variables were right then I though maybe the user would like to see that as well. 
		cout << "Blue Player:\t" << bluescore << endl;
		cout << "Red Player:\t\t" << redscore << endl;
		// These if/else statements will determine the winner by checking what variable has the highest value. 
		if (redscore>bluescore)
		{
			cout << "Red Player wins!\n";
		}
		else if (redscore<bluescore)
		{
			cout << "Blue Player wins!\n";
		}
		else 
		{	// If both variable values are the same then the match will end in a draw.
			cout << "The match ends in a draw!\n";
		}
			// This loop will ask if the user would like to play again 100000000 or untill the user inputs 'N' or 'n'.
		cout << endl << "Would you like to play again?\nY: Yes\tN: No\n";
		cin >> again;
		cout << endl << endl;
		
		if (again=='Y' || again=='y')
		{
			count++;
		}
		else if (again=='N' || again=='n')
		{	// When the user decides to end the program count will be incriminted by 100000000 so the loop's condition will be met.
			count+=100000000;
		}
	}
	
	return 0;	
}