
#include<iostream>
#include<cstdlib>
#include<time.h>

using namespace std;

int main ()
{
	
	int n=5; // number of guesses allowed
	int guess; //stores the values of guessed number
	int ran_num; // stores the value of random number generated

	
	srand (time(0)); //takes time of the sysem to seed the random function
	ran_num=rand()%10; 
	cout<< "\n Guess a Number from 0 to 9, you can guess 5 times \n"; 

while (n>=1)
{
		cin>>guess;   //input numer
if (guess==ran_num){
	cout<<"\n Congrats! You Guessed it Right\n";
				break;
	}
	if (n>1) {                  // just not to display the message last extra time
	
 if (ran_num>guess){
		cout<<" Guess a number greater than previous Guess: ";
	            	}
		else 
		cout<< "Guess a Number lesser than previous Guess: "; 
	     	}
          n=n-1;				
} 

	if (n<=1){
		cout<<" \n Tries Over......Better Luck Next time, the Number was \t "<<ran_num;
	} 
}