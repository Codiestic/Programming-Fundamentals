#include<iostream>
using namespace std;

int main()
{
	char ch;
	cout<<endl<<"\t\t**Press \'M\' for Male and \'F\' for Female**"<<endl;
	cin>>ch;
	ch=toupper(ch);
	switch(ch)
	{
		case 'M':
			cout<<endl<<"Gender: M A L E"<<endl;
			break;
		case 'F':
			cout<<endl<<"Gender: F E M A L E"<<endl;
			break;
		default:
			cout<<endl<<"Gender: Not Recognized!"<<endl;
	}
	
	
	return 0;
}
