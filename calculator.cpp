#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float o1,o2;
	char op;
	string input;
	start:
		cout<<"Enter first integer: ";
		cin>>o1;
		cout<<"Enter second integer: ";
		cin>>o2;
	reenter:
		cout<<"Enter the operation (+, - , * , / , %): ";
		cin>>op;
		switch(op)
		{
			case '+':
				cout<<"Sum: "<<o1+o2<<endl;
				break;
			case '-':
				cout<<"Difference: "<<o1-o2<<endl;
				break;
			case '*':
				cout<<"Product: "<<o1*o2<<endl;
				break;
			case '/':
				cout<<"Quotient: "<<o1/o2<<endl;
				break;
			case '%':
				cout<<"Remainder: "<<fmod(o1,o2)<<endl;
				break;
			default:
				cout<<"Enter a valid operator...!"<<endl;
				goto reenter;
		}
		cout<<"\nWant to do another calculation (yes or no): ";
		cin>>input;
		cout<<"------------------------------------------------\n\n";
		if(input == "yes")
		{
		   goto start;
		}
	
}
