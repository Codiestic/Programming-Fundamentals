#include<iostream>
using namespace std;

int main()
{
	int n, div;

	cout<<endl<<"Enter any Number: "<<endl;
	cin>>n;
	
	cout<<endl<<"Enter the Divisor: "<<endl;
	cin>>div;
	float quotient;
	quotient = n/div;
	cout<<endl<<"Quotient = "<<quotient<<endl<<"Remainder = "<<n%div<<endl;
	
	
	
	return 0;
}
