#include<iostream>
using namespace std;

int main()
{
	int age;
	cout<<endl<<"Enter your Age: "<<endl;
	cin>>age;
	if(age>0)
	{
		if(age>=18)
		{
			cout<<endl<<"\tCriteria fulfilment accomplished..."<<endl;
			cout<<endl<<"\tGood Luck with your Voting :)"<<endl;
		}	
		else
		{
			cout<<endl<<" You are not Eligible to Vote yet "<<endl;
			cout<<endl<<"Wait for "<< 18-age<<" year(s) to be eligible"<<endl;
		}
	}
	else if(age<0)
	{
		cout<<endl<<"Input not declared as Age"<<endl;
	}
	else
		cout<<endl<<"Eligiblity criteria not met!"<<endl;
	
	return 0;
}
