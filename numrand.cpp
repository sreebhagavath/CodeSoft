#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	while(true)
{
    srand(time(0));
	int guess,random=rand() % 101;
	cout<<"Guess the number between 0 to 100: ";
	cin>>guess;
	if(guess >=0&&guess <=100)
	  {
	cout<<"the number is : "<<random<<endl;
	if(guess == random)
	{
		cout<<"You guessed the number right...!\n";
		cout<<"Great job! You cracket it...!\n";
		break;
	}
	else if(guess < random)
	{
		cout<<"Your guess is low...!\n";
		cout<<"Try again...!\n\n";
		cout<<"---------------------------------------\n\n";
	}
	else
	{
		cout<<"Your guess is high...!\n";
		cout<<"Try again...!\n\n";
	    cout<<"---------------------------------------\n\n";
	}
      }
else
{
	cout<<"Re-enter the number between 0 to 100 ....!\n\n";
    cout<<"---------------------------------------\n\n";
}
}
}
