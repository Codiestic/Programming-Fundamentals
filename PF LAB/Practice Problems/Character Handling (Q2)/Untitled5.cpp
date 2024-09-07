#include<iostream>
using namespace std;

int main()
{
	int n;
	char ch;
	
	cout<<"\t\t--- M O N T H ---"<<endl;
	cout<<endl<<"\t\t1. JANUARY \n\t\t2. FEBRUARY \n\t\t3. MARCH \n\t\t4. APRIL \n\t\t5. MAY";
	cout<<"\n\t\t6. JUNE \n\t\t7. JULY \n\t\t8. AUGUST \n\t\t9. SEPTEMBER \n\t\t10. OCTOBER";
	cout<<"\n\t\t11. NOVEMBER \n\t\t12. DECEMBER";
	cout<<endl<<endl<<"Press Y if this is a Leap Year and N if it isn't \n";
	cin>>ch;
	ch=toupper(ch);
	if(ch=='Y')
	{
		cout<<endl<<endl<<"Enter the Number of the Month: \t";
		cin>>n;
		switch(n)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				cout<<endl<<"Days of Month: 31"<<endl; break; 
			case 2:
				cout<<endl<<"Days of Month: 29"<<endl; break; 
			case 4:
			case 6:
			case 9:
			case 11:
				cout<<endl<<"Days of Month: 30"<<endl; break; 
			
			default:
				cout<<endl<<"Invalid!"<<endl;
		}
	}
	else if(ch=='N')
	{
		cout<<endl<<endl<<"Enter the Number of the Month: \t";
		cin>>n;
		switch(n)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				cout<<endl<<"Days of Month: 31"<<endl; break; 
			case 2:
				cout<<endl<<"Days of Month: 28"<<endl; break; 
			case 4:
			case 6:
			case 9:
			case 11:
				cout<<endl<<"Days of Month: 30"<<endl; break; 
			
			default:
				cout<<endl<<"Invalid!"<<endl;
		}
		
	}
	else
		cout<<"\n Your Input is Incorrect!";


	
	return 0;
}
