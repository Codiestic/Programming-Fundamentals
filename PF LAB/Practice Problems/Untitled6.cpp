#include<iostream>
using namespace std;

int main()
{
	float income, zakat;
	cout<<endl<<"Enter your Annual Income (Without any Space, or Commas): "<<endl;
	cin>>income;
	
	zakat=income;
	cout<<endl<<"Your Payable Zakat (Nisab) is "<<income*0.025;
	
	
	return 0;
}
