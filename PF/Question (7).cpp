#include<iostream>
#include<iomanip>
#include<conio.h>
#include<time.h>

using namespace std;

int main()
{
	
	char ch;
	int count=0, count1=0;
	
	time_t timeNow = time(0);			//*** This Part Has been written as it was given in the Assignment
	tm *tm_local = localtime(&timeNow);
	int thisHour = tm_local -> tm_hour;	
	
	cout<<endl<<"\t\t"<<"FAST FOOD Services (Pvt)(Ltd)"<<endl;

	do
	{
		int n1=0, quantity=0;
		float total=0;		
		do
		{
			
		cout<<"\n\n"<<"M"<<"\t"<<"Meals";
		cout<<"\n"<<"B"<<"\t"<<"Beverages";
		
		cout<<endl<<endl<<"Please take your choice:    ";
		cin>>ch;
		ch = toupper(ch);
		
		if(ch=='M')
		{
						
			cout<<endl<<endl<<"\t\t"<<"MENU";
			cout<<endl<<"\t"<<"Meals"<<endl<<endl;
			
			cout<<"1.   Burger "<<setw(4)<<"           Rs. 450/-"<<endl;
			cout<<"2.   Roll Paratha "<<setw(4)<<"     Rs. 220/-"<<endl;
			cout<<"3.   Spaghetti "<<setw(4)<<"        Rs. 300/-"<<endl;
			
			cout<<endl<<"Please select from the Menu:    ";
			cin>>n1;
			
			switch(n1)
			{
				case 1:
					cout<<endl<<"You choosed Burger";
					cout<<endl<<"Enter Quantity:   ";
					cin>>quantity;
					total = quantity * 450;
					
					
					break;
				case 2:
					cout<<endl<<"You choosed Burger";
					cout<<endl<<"Enter Quantity:   ";
					cin>>quantity;
					total = quantity * 220;
					
					
					break;
				case 3:
					cout<<endl<<"You choosed Burger";
					cout<<endl<<"Enter Quantity:   ";
					cin>>quantity;				
					total = quantity * 300;
					
					
					break;
					
				default:
					cout<<endl<<"Invalid Choice";
			}
			

			
		}
	
		else if(ch=='B')
		{
			cout<<endl<<endl<<"\t\t"<<"MENU";
			cout<<endl<<"\t"<<"Beverages"<<endl<<endl;
			
			cout<<"1.   Coffee "<<setw(4)<<"         Rs. 200/-"<<endl;
			cout<<"2.   Fresh Juice "<<setw(4)<<"    Rs. 350/-"<<endl;
			cout<<"3.   Green Tea "<<setw(4)<<"      Rs. 75/-"<<endl;
			
			cout<<endl<<"Please select from the Menu:    ";
			cin>>n1;
			
			switch(n1)
			{
				case 1:
					cout<<endl<<"You choosed Coffee";
					cout<<endl<<"Enter Quantity:   ";
					cin>>quantity;
					total = quantity * 200;
					
					
					break;
				case 2:
					cout<<endl<<"You choosed Fresh Juice";
					cout<<endl<<"Enter Quantity:   ";
					cin>>quantity;
					total = quantity * 350;
					
					
					break;
				case 3:
					cout<<endl<<"You choosed Green Tea";
					cout<<endl<<"Enter Quantity:   ";
					cin>>quantity;				
					total = quantity * 75;
					
					
					break;
					
				default:
					cout<<endl<<"Invalid Choice";
			}

		}
	
		else
		{
			cout<<endl<<"";
		}
		
		if(thisHour>=16 && thisHour<=18)
		{			
			cout<<"\nTotal Bill: "<<total;
			total = total - (total*0.035) - (total*0.25);
			cout<<endl<<"Payable Amount = "<<total;

		}
		
		else if(thisHour>0 && thisHour<=8)
		{
			cout<<"\nTotal Bill: "<<total;
			total = total - (total*0.035) - (total*0.50);
		}
		
		else
		{
			cout<<"\nTotal Bill: "<<total;
			total = total - (total*0.035);
		}
		
		cout<<"\nPayable Amount = "<<total;
		
		cout<<"\n\t\tPress 0 if you dont want any other thing, else press any button.";
		cin>>count1;
		
		}while(count1!=0);
		
		cout<<endl<<endl<<"\t\t"<<"Press 0 to Quit, else press any Button to Resume"<<endl<<"\t\t";
		cin>>count;

	}while(count!=0);
	
	
	getch();
	return 0;
}
