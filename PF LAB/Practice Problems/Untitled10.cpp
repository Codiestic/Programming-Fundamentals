#include<iostream>
using namespace std;

int main()
{
	char ch;
	double c, f;
	
	cout<<endl<<"\t\t *** CONVERTER ***"<<endl;
	
	cout<<"Press C if you want to Convert Celcius into Fahrenheit";
	cout<<endl<<"Press F if you want to convert Fahrenheit into Celcius"<<endl;
	cin>>ch;
	
	ch=toupper(ch);
	
	if(ch=='C')
	{
		cout<<endl<<"Enter Temperature(Celsius): "<<endl;
		cin>>c;
		
		cout<<endl<<c<<" in Fahrenheit is "<<(c*9/5)+32<<endl;
	}
	else if(ch=='F')
	{
		cout<<endl<<"Enter Temperature(Fahrenheit): "<<endl;
		cin>>c;
		
		cout<<endl<<c<<" in Celsius is "<<(c-32)*5/9<<endl;
	}
	else
		cout<<endl<<"Not Recognized!"<<endl;
		
	return 0;
	
}
