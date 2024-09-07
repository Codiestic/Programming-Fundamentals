#include<iostream>
using namespace std;

int main()
{
	int n, a;
	cout<<endl<<"\t\t\t***DEMONSTRATION***"<<endl;
	
	cout<<"1. \\a"<<endl<<"2. \\n"<<endl<<"3. \\t"<<endl<<"4. \\";
	cout<<endl<<"5. \""<<endl<<"6. \'"<<endl<<"7. \\0"<<endl;
	
	cout<<endl<<endl<<"Press the relevant number to check the working"<<endl;
	cin>>n;
	
	cout<<endl;
	switch(n)
	{
		case 1:
			cout<<"It produces an Alarm"<<endl;
			cout<<"Enter any Number: ";
			cin>>a;
			cout<<"\a";
			break;
		case 2:
			cout<<"It brings the Cursor to a New Line"<<endl;
			cout<<"Enter any Number Here: \n";
			cin>>a;
			cout<<endl<<"You see the Number is entered in a New Line";
			
			break;
		case 3:
			cout<<"It brings the Cursor to the Next Horizontal Tabular Position"<<endl;
			cout<<"Enter any Number: \t";
			cin>>a;
			cout<<endl<<"You see the gap between, this is how this Escape Sequence work";
			
			break;
		case 4:
			cout<<"It adds a Backslash"<<endl;
			cout<<"Enter any Number: ";
			cin>>a;
			cout<<endl<<" \\"<<a<<"\\";
			
			break;
		case 5:
			cout<<"This shows a Double Quote symbol"<<endl;
			cout<<"Enter any Number: ";
			cin>>a;
			cout<<endl<<"\""<<a<<"\"";
			
			break;
		case 6:
			cout<<"This shows a Single Quote symbol"<<endl;
			cout<<"Enter any Number: ";
			cin>>a;
			cout<<endl<<"\'"<<a<<"\'";
			
			break;
		case 7:
			cout<<"This gives the Value you Enter"<<endl;
			cout<<"Enter any Number: ";
			cin>>a;
			cout<<a<<"\t\t \0";
						
			break;

		
		
		default:
			cout<<"Invalid!"<<endl;
			
	}
	
	
	
	
	
	
	return 0;
}
