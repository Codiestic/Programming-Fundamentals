#include<iostream>
using namespace std;

int main()
{
	int n; 
	cout<<endl<<"\t\t\t*** BASIC CALCULATOR ***"<<endl;
	
	double a, b; int rem_a, rem_b;
	
	cout<<endl<<" Press 1 for Addition\n Press 2 for Subtraction\n Press 3 for Multiplication\n Press 4 for Division\n Press 5 for Modulus(Remainder)"<<endl;
	cin>>n;

	switch(n)
	{
		case 1:

			cout<<endl<<"Enter any two Numbers: \t"; cin>>a>>b;
			cout<<endl<<a<<" + "<<b<<" = \t"<< a+b;
			break;
		case 2:

			cout<<endl<<"Enter any two Numbers: \t"; cin>>a>>b;
			cout<<endl<<a<<" - "<<b<<" = \t"<< a-b;

			break;
		
		case 3:	

			cout<<endl<<"Enter any two Numbers: \t"; cin>>a>>b;
			cout<<endl<<a<<" x "<<b<<" = \t"<< a*b;

			break;
		
		case 4:			
		
			cout<<endl<<"Enter any two Numbers: \t"; cin>>a>>b;
			cout<<endl<<a<<" / "<<b<<" = \t"<< a/b;

			break;
		
		case 5:

			cout<<endl<<"Enter any two Numbers: \t"; cin>>a>>b;
			cout<<endl<<a<<" % "<<b<<" = \t"<< rem_a % rem_b;

			break;
		
		default:
			cout<<endl<<"\tInvalid Input"<<endl;
		
	}
	
	
	
	return 0;
}
