#include<iostream>
#include<cctype>
using namespace std;

int main()
{
	int n;
	
	cout<<endl<<"Enter your Number: ";
	cin>>n;
	if(n!=0)
	{
		cout<<endl<<"Cube of "<<n<<" is "<<n*n*n;
	}
	else
		cout<<endl<<"Cube of 0 is 0!";
	
	return 0;
}
