#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	
	float weight, distance, d;
	const float km = 1.609;

	cout<<endl<<"\t\t\t***SHIPPING TRADERS & CO.***"<<endl<<endl;

	
	cout<<endl<<"\t\tTerms and Conditions Applied"<<endl;
	cout<<"\t1. Weight should not be more than 0 \n\t2. Applicable Distance is from 20 to 3000 Miles for shipping";
	cout<<"\n\t3. Charges applied (500 km/-)"<<endl;


	

		cout<<endl<<endl<<"Enter the Weight of the Package (Kilograms): "<<setw(4);
		cin>>weight;

		cout<<"Enter Distance for Shipping (Miles): "<<setw(4);
		cin>>distance;

		d = distance * km;

		if((weight!=0.0) || (distance>=10 && distance<=3000)) 
		{
			if(d>=10 && d<=500)
			{
				if(weight>0 && weight<=2)
				{
					cout<<endl<<"Payable Amount: 510"<<endl;
				}
				else if(weight>2 && weight<=6)
				{
					cout<<endl<<"Payable Amount: 820"<<endl;
				}
				else if(weight>6 && weight<=10)
				{
					cout<<endl<<"Payable Amount: 1070"<<endl;
				}
				else if(weight>10 && weight<=20)
				{
					cout<<endl<<"Payable Amount: 1480"<<endl;
				}
				else
					cout<<endl<<"Weight Value Not Applicable";
			}
			else if(d>500 && d<=1000)
			{
				if(weight<=2)
				{
					cout<<endl<<"Payable Amount: "<<510*2<<endl;
				}
				else if(weight>2 && weight<=6)
				{
					cout<<endl<<"Payable Amount: "<<820*2<<endl;
				}
				else if(weight>6 && weight<=10)
				{
					cout<<endl<<"Payable Amount: "<<1070*2<<endl;
				}
				else if(weight>10 && weight<=20)
				{
					cout<<endl<<"Payable Amount: "<<1480*2<<endl;
				}
				else
					cout<<endl<<"Weight Value Not Applicable";
			}
			else if(d>1000 && d<=1500)
			{
				if(weight<=2)
				{
					cout<<endl<<"Payable Amount: "<<510*3<<endl;
				}
				else if(weight>2 && weight<=6)
				{
					cout<<endl<<"Payable Amount: "<<820*3<<endl;
				}
				else if(weight>6 && weight<=10)
				{
					cout<<endl<<"Payable Amount: "<<1070*3<<endl;
				}
				else if(weight>10 && weight<=20)
				{
					cout<<endl<<"Payable Amount: "<<1480*3<<endl;
				}
				else
					cout<<endl<<"Weight Value Not Applicable";
			}
			else if(d>1500 && d<=2000)
			{
				if(weight<=2)
				{
					cout<<endl<<"Payable Amount: "<<510*4<<endl;
				}
				else if(weight>2 && weight<=6)
				{
					cout<<endl<<"Payable Amount: "<<820*4<<endl;
				}
				else if(weight>6 && weight<=10)
				{
					cout<<endl<<"Payable Amount: "<<1070*4<<endl;
				}
				else if(weight>10 && weight<=20)
				{
					cout<<endl<<"Payable Amount: "<<1480*4<<endl;
				}
				else
					cout<<endl<<"Weight Value Not Applicable";
			}
			else if(d>2000 && d<=2500)
			{
				if(weight<=2)
				{
					cout<<endl<<"Payable Amount: "<<510*5<<endl;
				}
				else if(weight>2 && weight<=6)
				{
					cout<<endl<<"Payable Amount: "<<820*5<<endl;
				}
				else if(weight>6 && weight<=10)
				{
					cout<<endl<<"Payable Amount: "<<1070*5<<endl;
				}
				else if(weight>10 && weight<=20)
				{
					cout<<endl<<"Payable Amount: "<<1480*5<<endl;
				}
				else
					cout<<endl<<"Weight Value Not Applicable";
			}
			else if(d>2500 && d<=3000)
			{
				if(weight<=2)
				{
					cout<<endl<<"Payable Amount: "<<510*6<<endl;
				}
				else if(weight>2 && weight<=6)
				{
					cout<<endl<<"Payable Amount: "<<820*6<<endl;
				}
				else if(weight>6 && weight<=10)
				{
					cout<<endl<<"Payable Amount: "<<1070*6<<endl;
				}
				else if(weight>10 && weight<=20)
				{
					cout<<endl<<"Payable Amount: "<<1480*6<<endl;
				}
				else
					cout<<endl<<"Weight Value Not Applicable";
			}
			else if(d>3000 && d<=3500)
			{
				if(weight<=2)
				{
					cout<<endl<<"Payable Amount: "<<510*7<<endl;
				}
				else if(weight>2 && weight<=6)
				{
					cout<<endl<<"Payable Amount: "<<820*7<<endl;
				}
				else if(weight>6 && weight<=10)
				{
					cout<<endl<<"Payable Amount: "<<1070*7<<endl;
				}
				else if(weight>10 && weight<=20)
				{
					cout<<endl<<"Payable Amount: "<<1480*7<<endl;
				}
				else
					cout<<endl<<"Weight Value Not Applicable";
			}
			else if(d>3500 && d<=4000)
			{
				if(weight<=2)
				{
					cout<<endl<<"Payable Amount: "<<510*8<<endl;
				}
				else if(weight>2 && weight<=6)
				{
					cout<<endl<<"Payable Amount: "<<820*8<<endl;
				}
				else if(weight>6 && weight<=10)
				{
					cout<<endl<<"Payable Amount: "<<1070*8<<endl;
				}
				else if(weight>10 && weight<=20)
				{
					cout<<endl<<"Payable Amount: "<<1480*8<<endl;
				}
				else
					cout<<endl<<"Weight Value Not Applicable";
			}
			else if(d>4000 && d<=4500)
			{
				if(weight<=2)
				{
					cout<<endl<<"Payable Amount: "<<510*9<<endl;
				}
				else if(weight>2 && weight<=6)
				{
					cout<<endl<<"Payable Amount: "<<820*9<<endl;
				}
				else if(weight>6 && weight<=10)
				{
					cout<<endl<<"Payable Amount: "<<1070*9<<endl;
				}
				else if(weight>10 && weight<=20)
				{
					cout<<endl<<"Payable Amount: "<<1480*9<<endl;
				}
				else
					cout<<endl<<"Weight Value Not Applicable";
			}
			else if(d>4500 && d<5000)
			{
				if(weight<=2)
				{
					cout<<endl<<"Payable Amount: "<<510*10<<endl;
				}
				else if(weight>2 && weight<=6)
				{
					cout<<endl<<"Payable Amount: "<<820*10<<endl;
				}
				else if(weight>6 && weight<=10)
				{
					cout<<endl<<"Payable Amount: "<<1070*10<<endl;
				}
				else if(weight>10 && weight<=20)
				{
					cout<<endl<<"Payable Amount: "<<1480*10<<endl;
				}
				else
					cout<<endl<<"Weight Value Not Applicable";
			}
			else
				cout<<endl<<"Distance Criteria Not Matched";
		}
	
		else
		{
			cout<<endl<<"Invalid Value Input";
		}

	
	
	return 0;
}
