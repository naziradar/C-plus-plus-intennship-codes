#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

// ROCK SCISSOR PAPER GAME 

//1 for Paper , 2 for SCISSOR , 3 for ROCK...... paper hides rock (wins)

int main()
{
	char con='y';
	int c;
	int r; // stores the value of random number generated

	cout <<"\n simple ROCK PAPER AND SCISSOR GAME \n";
	

	do {
		srand (time(0)); //takes time of the sysem to seed the random function
	r=rand()%3+1; 
			cout<<"\n Enter your Choice: 1 for Paper, 2 for Rock, 3 for SCISSOR\n";
			cin>>c;
		
		
		if (c==r){
		cout <<" It is a Tie ....\n";
			
		}
		else {
		switch (c)
		{
			case 1:
				if ( r==2)
				{
				cout <<" Computer Said:2 ROCK \t";
				cout << " You said: Paper, You WON \n";
			}
				else{
				cout <<" Computer Said: SCISSOR \t ";
				cout << "You Said Paper, You LOST..\n";
				}
				break;
			case 2:
				if (r==1)  {				
	
				cout <<" Computer Said: PAPER \t";
				cout <<" You said: ROCK, YOU LOST\n";
				}
				else 
				{
				cout <<" Computer Said: SCISSOR\t  ";
				cout <<" You said: ROCK, You WON...\n";
			}
				break;
			case 3:
				if(r==1){
				cout<< "Computer Said: PAPER \t";
				cout<< "You said SCISSOR: You WON..\n";
			}
				else {
				cout<< "Computer Said: ROCK\t";
				cout<<" You said: SCISSOR, You LOST...\n";
			}
				break;
				}
			}
			
		cout<< "you want to play again - 'y' for Yes OR n for No: ";	
		cin>>con;
		
	}
	 while (con=='y'|| c=='Y');
	 
	
}
