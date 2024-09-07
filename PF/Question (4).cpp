#include<iostream>
using namespace std;

int main()
{
	int hour, n;
	
	cout<<"Press corresponding Number for the Equivalent Month: "<<endl;

	cout<<endl<<"\t\t1. JANUARY \n\t\t2. FEBRUARY \n\t\t3. MARCH \n\t\t4. APRIL \n\t\t5. MAY";
	cout<<"\n\t\t6. JUNE \n\t\t7. JULY \n\t\t8. AUGUST \n\t\t9. SEPTEMBER \n\t\t10. OCTOBER";
	cout<<"\n\t\t11. NOVEMBER \n\t\t12. DECEMBER"<<endl<<endl<<"\t\t";
	cin>>n;

	switch(n)
		{
			case 1:
				cout<<endl<<"You Choosed January\n";
				
				cout<<"Enter Number of Hours"<<endl;
				cin>>hour;
				
				if(hour==744)
					cout<<endl<<"Validated! You may proceed";
				else
					cout<<endl<<"Can Not Validate, input does not match";
				break;

			case 3:
				cout<<endl<<"You choosed March\n";
				
				cout<<"Enter Number of Hours"<<endl;
				cin>>hour;
				
				if(hour==744)
					cout<<endl<<"Validated! You may proceed";
				else
					cout<<endl<<"Can Not Validate, input does not match";
				break;

			case 5:
				
				cout<<endl<<"You choosed May\n";
				
				cout<<"Enter Number of Hours"<<endl;
				cin>>hour;
				if(hour==744)
					cout<<endl<<"Validated! You may proceed";
				else
					cout<<endl<<"Can Not Validate, input does not match";
				break;

			case 7:
				
				cout<<endl<<"You choosed July\n";
				
				cout<<"Enter Number of Hours"<<endl;
				cin>>hour;
				if(hour==744)
					cout<<endl<<"Validated! You may proceed";
				else
					cout<<endl<<"Can Not Validate, input does not match";
				break;

			case 8:
				
				cout<<endl<<"You choosed August\n";
				
				cout<<"Enter Number of Hours"<<endl;
				cin>>hour;
				if(hour==744)
					cout<<endl<<"Validated! You may proceed";
				else
					cout<<endl<<"Can Not Validate, input does not match";
				break;

			case 10:
				
				cout<<endl<<"You choosed October\n";
				
				cout<<"Enter Number of Hours"<<endl;
				cin>>hour;
				if(hour==744)
					cout<<endl<<"Validated! You may proceed";
				else
					cout<<endl<<"Can Not Validate, input does not match";
				break;

			case 12:
				
				cout<<endl<<"You choosed December\n";
				
				cout<<"Enter Number of Hours"<<endl;
				cin>>hour;
				if(hour==744)
					cout<<endl<<"Validated! You may proceed";
				else
					cout<<endl<<"Can Not Validate, input does not match";
				break; 

			case 2:
				
				cout<<endl<<"You choosed February\n";
				
				cout<<"Enter Number of Hours"<<endl;
				cin>>hour;
				if(hour==672)
					cout<<endl<<"Validated! You may proceed";
				else
					cout<<endl<<"Can Not Validate, input does not match";
				break;

			case 4:
				
				cout<<endl<<"You choosed April\n";
				
				cout<<"Enter Number of Hours"<<endl;
				cin>>hour;
				if(hour==744)
					cout<<endl<<"Validated! You may proceed";
				else
					cout<<endl<<"Can Not Validate, input does not match";
				break;

			case 6:
				
				cout<<endl<<"You choosed June\n";
				
				cout<<"Enter Number of Hours"<<endl;
				cin>>hour;
				if(hour==744)
					cout<<endl<<"Validated! You may proceed";
				else
					cout<<endl<<"Can Not Validate, input does not match";
				break;

			case 9:
				
				cout<<endl<<"You choosed September\n";
				
				cout<<"Enter Number of Hours"<<endl;
				cin>>hour;
				if(hour==744)
					cout<<endl<<"Validated! You may proceed";
				else
					cout<<endl<<"Can Not Validate, input does not match";
				break;
	
			case 11:
				
				cout<<endl<<"You choosed Novermber\n";
				
				cout<<"Enter Number of Hours"<<endl;
				cin>>hour;
				if(hour==720)
					cout<<endl<<"Validated! You may proceed";
				else
					cout<<endl<<"Can Not Validate, input does not match";
				break;

			default:
				cout<<endl<<"Invalid!"<<endl;
		}
	
	
	return 0;
}
