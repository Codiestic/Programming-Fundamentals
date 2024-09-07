#include<iostream>
#include<iomanip>
#include<time.h>
#include<conio.h>
using namespace std;

int main()
{

	// ***************************VARIABLE DECLARATIONS
				
	int floor, room, occupied_room=0;
	int un_occupied_room=0, totalRoom=0, totalOroom=0;
	char ch1;
	
	int sale[5];
	int loop=0;
	
	char ch;
	int count=0;
	
	time_t timeNow = time(0);			//*** This Part Has been modified as it was given in the Assignment
	tm *tm_local = localtime(&timeNow);
	int thisHour = tm_local -> tm_hour;	
	
	
	//********************************OUTPUT FORMATTING 
	
	cout<<"\t\t\tPROGRAMMING FUNDAMENTALS (ASSIGNMENT 4)"<<endl;
	cout<<"\t\t\t\t\t\t\t\tShayan Faisal"<<endl<<"\t\t\t\t\t\t\t\t"<<46501;
	
	
	cout<<endl<<endl<<"\t\tPlease ensure that the output screen is Maximized"<<endl;
	cout<<endl<<endl<<endl;
	
	
	//*****************************PURPOSE: ASSIGNMENT OUTPUT
	{ //		**OPENING OF NEW BODY**
		
		
		int i=1, n, j=1;            //Consider These just for this newly made body
		
		cout<<"\n\t\t**Press the Number Corresponding to the Question to view its Output**"<<endl;
		
		do
		{
		
		cout<<endl<<"Press 1 for Question 1\nPress 2 for Question 2\nPress 3 for Question 3\nPress 0 to Quit      ::";
		cin>>n;
		
		switch(n)
		{
			case 1:
				
				cout<<endl<<endl<<"\t\tQUESTION 1"<<endl<<endl;
				
				
				cout<<endl<<endl<<"Enter how many floors are there in the Hotel:     ::";
				cin>>floor;
				
				do
				{
					if(floor<1)
					{
						cout<<endl<<endl<<"Such Input is not Validated, please input again!";
					}
				
					else
					{
			
						for(int i=1; i<=floor; )
						{
			
							cout<<endl<<"Enter Number of Rooms on Floor "<<i<<"     ::";
							cin>>room;
			
							if(room<10)
							{
								cout<<endl<<endl<<"The Hotel Should atleast have 10 or more Rooms on each floor!";
							}
			
							else if(isdigit(room)==true)	
							{
								totalRoom+=room;
								cout<<endl<<"\nEnter how many rooms are occupied in this Floor     ::";
								cin>>occupied_room;
								totalOroom+=occupied_room; i++;				
							}
			
							else
							{
								cout<<"Input not validated!";
							}
						}
			
						un_occupied_room = totalRoom-totalOroom;
			
						cout<<endl<<"The Number of total Hotel Rooms are: "<< totalRoom;
						cout<<endl<<"The Number of Occupied Hotel Rooms are: "<< totalOroom;
						cout<<endl<<"The Number of Unoccupied Hotel Rooms are: "<< un_occupied_room;	
					}
			
					cout<<endl<<"\t\tDo you want to run this Again? Press Y to re-run the code, else press any button to Quit ";
					cin>>ch1;
			
				}while(ch1!='Y' || ch1!='y');

			break;		
			case 2:
			
				cout<<endl<<endl<<"\t\tQUESTION 2"<<endl<<endl;
				
				
				cout<<endl<<"Enter the sales for 5 stores on today's Date: ";
				do
				{
			
					for(int i=1; i<6;)
					{
						cout<<endl<<"Enter Sale for Store "<<i<<"    ::";
						cin>>sale[i];
			
						if(sale[i]<100)
						{
							cout<<endl<<"This range is not Aplicable";
						}
			
						else
						{
							
			
							for(int j=sale[i]/100; j<=sale[i]; j+=100)
							{
								
							}
			
							cout<<endl;	i++;		
						}
					}
					
					cout<<endl<<endl<<"SALES BAR CHART"<<endl;
					
					for(int i=1; i<=5; i++)
					{
						
						cout<<"Store "<<i<<":   "; 
						for(int j=sale[i]/100; j<=sale[i]; j+=100)
						{
							cout<<"*";
						}
						cout<<endl;
						
					}
			
				cout<<endl<<"\t\tPress any button to Rerun the Code, else press 0 to quit  ";
				cin>>loop;
				}while(loop!=0);

				
				
				
			break;
			case 3:
			
				cout<<endl<<endl<<"\t\tQUESTION 3"<<endl<<endl;
			
			
				cout<<endl<<"\t\t"<<"FAST FOOD Services (Pvt)(Ltd)"<<endl;
				do
				{
					int n1=0, quantity=0;
					float total=0;		
			
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
						total = total + (total*0.035) - (total*0.50);
					}
					
					else
					{
						cout<<"\nTotal Bill: "<<total;
						total = total + (total*0.035);
					}
					
					cout<<"\nPayable Amount = "<<total;
					
					cout<<endl<<endl<<"\t\t"<<"Press 0 to Quit, else press any Button to Resume"<<endl<<"\t\t";
					cin>>count;
				
				}while(count!=0);

				
			break;
			case 0:
				
				cout<<endl<<"\t\t\tQuitting the Screen. Thanks";
				exit(0);
			
			default:
				cout<<endl<<"Invalid Input, Question Number not matching";
				
		}
		
		}while(i!=0);
		
		
		
		
	}//			**CLOSING OF NEW BODY**
	
}
