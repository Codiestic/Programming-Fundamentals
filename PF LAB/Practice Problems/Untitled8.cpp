#include<iostream>
using namespace std;

int main()
{
	double a, b, c;
	
	cout<<endl<<"Enter any three Positive Numbers: "<<endl;
	cin>>a>>b>>c;
	
	if(a>b && a>c)
	{
		cout<<endl<<a<<" is greatest."<<endl;
	}
	else if(b>c && b>a)
	{
		cout<<endl<<b<<" is greatest. "<<endl;
	}
	else if(c>a && c>b)
	{
		cout<<endl<<c<<" is greatest. "<<endl;
	}
	else if(a==0 && b==0 && c==0)
	{
		cout<<endl<<"All Inputs are Neutral!"<<endl;
	}
	else
	{
		cout<<endl<<"\t All Inputs are the same! "<<endl;
	}
	
	return 0;
}
