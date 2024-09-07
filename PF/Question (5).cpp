#include<iostream>
#include<conio.h>
#include<cctype>

using namespace std;

int main()
{
	int floor, room, occupied_room=0;
	int un_occupied_room=0, totalRoom=0, totalOroom=0;
	char ch;
	
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
		cin>>ch;

	}while(ch!='Y' || ch!='y');

	getch();
	return 0;
}
