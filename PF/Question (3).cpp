#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
		
	int i, age, family; float bill=0.0; 
	bool gender; int male=0, f_male=0;
	
	cout<<endl<<"\t\t ***TICKET GHAR***"<<endl;
	
	cout<<endl<<"How many total Members requiring the entrance: "<<setw(4);
	cin>>family;
	
	cout<<endl<<endl<<"First inform us by the gender (Either Male or Female)!";

	for(i=1; i<=family;)
	{
		cout<<endl<<"For Member "<<i<<"\n\nPress 1 for Male and 0 for Female ";
		cin>>gender;
		
		cout<<"Enter age of member "<<i<<endl;
		cin>>age;
		
		if(age>0 && age<=12)
		{
			if(gender==1)
			{
				male++; i++;
			}
			else if(gender==0)
			{
				f_male++; i++;
			}
			else
			{
				gender=false;
			}
			bill = bill+25;
		}
	
		else if(age>12 && age<=19)
		{
			if(gender==1)
			{
				male++; i++;
			}
			else if(gender==0)
			{
				f_male++; i++;
			}
			else
			{
				cout<<"\n Error "; i=i;
			}
			bill = bill+35; 
		}

		else if(age>19 && age<=50)
		{
			if(gender==1)
			{
				male++; i++;
			}
			else if(gender==0)
			{
				f_male++; i++;
			}
			else
			{
				cout<<"\n Error "; i=i;
			}
			bill = bill+50;
		}

		else if(age >50 )
		{
			if(gender==1)
			{
				male++; i++;
			}
			else if(gender==0)
			{
				f_male++; i++;
			}
			else
			{
				cout<<"\n Error "; i=i;
			}
			bill = bill+20;
		}
		
		else
			cout<<endl<<"Cannot Process";
	}
	
	cout<<endl<<"Your Evaluated bill is "<<bill;
	cout<<endl<<"Male are "<<male<<" and Female are "<<f_male;
	
	bill=(bill*0.05)+bill;
	cout<<endl<<"Net Total: "<<bill;
	
	return 0;
}
