#include<iostream>
using namespace std;

int main()
{
	double a, b, sum=0;
	
	cout<<endl<<"Enter any two Number: "<<endl;
	cin>>a>>b;
	
	sum=a+b; 
	
	cout<<endl<<"Sum of "<<a<<" and "<<b<<" = "<< sum<<endl;
	cout<<endl<<"Average of these numbers is "<< sum/2;
	return 0;
}
