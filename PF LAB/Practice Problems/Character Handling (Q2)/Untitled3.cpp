#include<iostream>
using namespace std;

int main()
{
	char ch;
	cout<<endl<<"Enter any Alphabet: \t";
	cin>>ch;

	if(isalpha(ch))
	{
		switch(tolower(ch))
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				cout<<endl<<"\""<<ch<<"\""<<" is a Vowel"<<endl; break;
			default:
				cout<<endl<<"\""<<ch<<"\""<<" is a Consonant"<<endl; break;
		}
	}
	else if(isdigit(ch))
	{
		cout<<endl<<"Input should be an Alphabet "<<endl;
	}
	else
		cout<<endl<<ch<<" is a special character"<<endl;
	
	
	return 0;
}
