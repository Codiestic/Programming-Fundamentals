#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<endl<<"Enter any Number:\t";
	cin>>n;
	if(n>0)
	{
	
		if(n%2==0)
		{
			cout<<"\nYou entered an Even Number."<<endl;
		}
		else
		{
			cout<<endl<<"You entered an Odd Number."<<endl;
		}
	
	}
	else if(n==0)
	{
		cout<<endl<<"0 is a Neutral Number."<<endl;
	}
	else
	{
		cout<<endl<<"Value Cant Be Processed!"<<endl;
	}
	
	return 0;
}
