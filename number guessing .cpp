#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	srand(time(0));
	int random_number = rand() %100+1;
	int number_guesses =0;
	int guess;
	cout<<"Welcome to the number guessing game!"<<endl;
	cout<<"I have choosen a random number between 1 and 100."<<endl;
	while(true)
	{
		cout<<"Enter the guess:";
		cin>>guess;
		number_guesses++;
		if(guess ==random_number)
		{
			cout<<"Congratulation! You guessed the number in"<<"guesses."<<endl;
			break;
		}
		else if(guess <random_number)
		{
			cout<<"Too low! Guess again."<<endl;
		}
		else{
			cout<<"Too high! Guess again."<<endl;
		}
	}
	return 0;

}
