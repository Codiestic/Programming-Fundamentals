#include<iostream>
using namespace std;

int main()
{
	int n;
	
	cout<<"\t\t---W E E K D A Y---"<<endl;
	
	cout<<endl<<endl<<"Enter the Number: \t";
	cin>>n;
	switch(n)
	{
		case 1:
			cout<<endl<<"\t\t\t M O N D A Y ";
			break;
		case 2:
			cout<<endl<<"\t\t\t T U E S D A Y";
			break;
		case 3:
			cout<<endl<<"\t\t\t W E D N E S D A Y";
			break;
		case 4:
			cout<<endl<<"\t\t\t T H U R S D A Y";		
			break;
		case 5:
			cout<<endl<<"\t\t\t F R I D A Y";
			break;
		case 6:
			cout<<endl<<"\t\t\t S A T U R D A Y";
			break;
		case 7:
			cout<<endl<<"\t\t\t S U N D A Y";
			break;
		default:
			cout<<endl<<"A week has only 7 Days!"<<endl;
	}
	cout<<endl<<endl<<"THANK YOU";
	
	return 0;
}
