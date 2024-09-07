#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int books, point;
	
	cout<<endl<<"\t\t\t***B O O K  C L U B***";
	
	cout<<endl<<"Enter number of Purchased Books: "<<setw(6);
	cin>>books;

	switch(books)
	{
		case 0:
			point=0;
			cout<<"No Pruchased Book";
			break;
		
			
		case 1:
			point =5;
			cout<<"You Got 1 Book";
			break;
		
		
		case 2:
			point = 15;
			cout<<"You got 2 Books";
			break;
		
		
		case 3:
			point = 30;
			cout<<"You got 3 Books";
			break;
		
		
		case 4:
			point = 60;
			cout<<"You got 4 Books";
			break;
		
		
		default:
			cout<<endl<<"Limit Exceeded!";
			break;
	}
	

	if(books==0 || books<=4)
	cout<<endl<<"Your Points are "<<setw(6)<<point;


	return 0;
}
