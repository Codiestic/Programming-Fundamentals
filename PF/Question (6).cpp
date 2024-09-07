#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int sale[5];
	int loop=0;
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

	getch();
	return 0;

}
