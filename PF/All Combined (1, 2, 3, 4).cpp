#include<iostream>
#include<iomanip>
using namespace std;

int main()
{

	// ***************************VARIABLE DECLARATIONS
				
		int books, point; 
		float weight, distance, d;		const float km = 1.609;
		int i, age, family; float bill=0.0; bool gender; int male=0, f_male=0;		
		int hour, n;
	
	
	//********************************OUTPUT FORMATTING 
	
	cout<<"\t\t\tPROGRAMMING FUNDAMENTALS (ASSIGNMENT 3)"<<endl;
	cout<<"\t\t\t\t\t\t\t\tShayan Faisal"<<endl<<"\t\t\t\t\t\t\t\t"<<46501;
	
	
	cout<<endl<<endl<<"\t\tPlease ensure that the output screen is Maximized"<<endl;
	cout<<endl<<endl<<endl;
	
	
	//*****************************PURPOSE: ASSIGNMENT OUTPUT
	{ //		**OPENING OF NEW BODY**
		
		
		int i=1, n, j=1;            //Consider These just for this newly made body
		
		cout<<"\n\t\t**Press the Number Corresponding to the Question to view its Output**"<<endl;
		
		do
		{
		
		cout<<endl<<"Press 1 for Question 1\nPress 2 for Question 2\nPress 3 for Question 3\nPress 4 for Question 4\nPress 0 to Quit   ::";
		cin>>n;
		
		switch(n)
		{
			case 1:
				cout<<"\n\t\t**QUESTION "<<n<<"**"<<endl<<endl;
				
				
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
					
					
			cout<<endl<<endl<<endl;
			break;
		
			case 2:
				cout<<"\n\t\t**QUESTION "<<n<<"**"<<endl<<endl;
				
				
				
										cout<<endl<<"\t\t\t***SHIPPING TRADERS & CO.***"<<endl<<endl;
					
						
						cout<<endl<<"\t\tTerms and Conditions Applied"<<endl;
						cout<<"\t1. Weight should not be more than 20 \n\t2. Applicable Distance is from 20 to 3000 Miles for shipping";
						cout<<"\n\t3. Charges applied (500 km/-)"<<endl;
						
					do
					{
					
							cout<<endl<<endl<<"Enter the Weight of the Package (Kilograms): "<<setw(4);
							cin>>weight;
					
							cout<<"Enter Distance for Shipping (Miles): "<<setw(4);
							cin>>distance;
						
							d = distance * km;
					
							if(weight>0 || (distance>=10 && distance<=3000)) 
							{
						
								if(d>=10 && d<=500)
								{
						
									if(weight>0 && weight<=2)
									{
										cout<<endl<<"Payable Amount: 510"<<endl;
									}
							
									else if(weight>2 && weight<=6)
									{
										cout<<endl<<"Payable Amount: 820"<<endl;
									}
							
									else if(weight>6 && weight<=10)
									{
										cout<<endl<<"Payable Amount: 1070"<<endl;
									}
							
									else if(weight>10 && weight<=20)
									{
										cout<<endl<<"Payable Amount: 1480"<<endl;
									}
							
									else
									{
										cout<<endl<<"Weight Value Not Applicable";
									}
								}

								else if(d>500 && d<=1000)
								{

									if(weight<=2)
									{
										cout<<endl<<"Payable Amount: "<<510*2<<endl;
									}

									else if(weight>2 && weight<=6)
									{
										cout<<endl<<"Payable Amount: "<<820*2<<endl;
									}

									else if(weight>6 && weight<=10)
									{
										cout<<endl<<"Payable Amount: "<<1070*2<<endl;
									}

									else if(weight>10 && weight<=20)
									{
										cout<<endl<<"Payable Amount: "<<1480*2<<endl;
									}

									else
									{
										cout<<endl<<"Weight Value Not Applicable";										
									}
								}

								else if(d>1000 && d<=1500)
								{

									if(weight<=2)
									{
										cout<<endl<<"Payable Amount: "<<510*3<<endl;
									}

									else if(weight>2 && weight<=6)
									{
										cout<<endl<<"Payable Amount: "<<820*3<<endl;
									}

									else if(weight>6 && weight<=10)
									{
										cout<<endl<<"Payable Amount: "<<1070*3<<endl;
									}

									else if(weight>10 && weight<=20)
									{
										cout<<endl<<"Payable Amount: "<<1480*3<<endl;
									}

									else
									{
										cout<<endl<<"Weight Value Not Applicable";																			
									}
								}

								else if(d>1500 && d<=2000)
								{

									if(weight<=2)
									{
										cout<<endl<<"Payable Amount: "<<510*4<<endl;
									}

									else if(weight>2 && weight<=6)
									{
										cout<<endl<<"Payable Amount: "<<820*4<<endl;
									}

									else if(weight>6 && weight<=10)
									{
										cout<<endl<<"Payable Amount: "<<1070*4<<endl;
									}

									else if(weight>10 && weight<=20)
									{
										cout<<endl<<"Payable Amount: "<<1480*4<<endl;
									}

									else
									{
										cout<<endl<<"Weight Value Not Applicable";
									}
								}
						
								else if(d>2000 && d<=2500)
								{
						
									if(weight<=2)
									{
										cout<<endl<<"Payable Amount: "<<510*5<<endl;
									}
						
									else if(weight>2 && weight<=6)
									{
										cout<<endl<<"Payable Amount: "<<820*5<<endl;
									}
						
									else if(weight>6 && weight<=10)
									{
										cout<<endl<<"Payable Amount: "<<1070*5<<endl;
									}
						
									else if(weight>10 && weight<=20)
									{
										cout<<endl<<"Payable Amount: "<<1480*5<<endl;
									}
						
									else
									{
										cout<<endl<<"Weight Value Not Applicable";																			
									}
								}

								else if(d>2500 && d<=3000)
								{

									if(weight<=2)
									{
										cout<<endl<<"Payable Amount: "<<510*6<<endl;
									}

									else if(weight>2 && weight<=6)
									{
										cout<<endl<<"Payable Amount: "<<820*6<<endl;
									}

									else if(weight>6 && weight<=10)
									{
										cout<<endl<<"Payable Amount: "<<1070*6<<endl;
									}

									else if(weight>10 && weight<=20)
									{
										cout<<endl<<"Payable Amount: "<<1480*6<<endl;
									}

									else
									{
										cout<<endl<<"Weight Value Not Applicable";																			
									}
								}

								else if(d>3000 && d<=3500)
								{

									if(weight<=2)
									{
										cout<<endl<<"Payable Amount: "<<510*7<<endl;
									}

									else if(weight>2 && weight<=6)
									{
										cout<<endl<<"Payable Amount: "<<820*7<<endl;
									}

									else if(weight>6 && weight<=10)
									{
										cout<<endl<<"Payable Amount: "<<1070*7<<endl;
									}

									else if(weight>10 && weight<=20)
									{
										cout<<endl<<"Payable Amount: "<<1480*7<<endl;
									}

									else
									{
										cout<<endl<<"Weight Value Not Applicable";																		
									}
								}

								else if(d>3500 && d<=4000)
								{

									if(weight<=2)
									{
										cout<<endl<<"Payable Amount: "<<510*8<<endl;
									}

									else if(weight>2 && weight<=6)
									{
										cout<<endl<<"Payable Amount: "<<820*8<<endl;
									}

									else if(weight>6 && weight<=10)
									{
										cout<<endl<<"Payable Amount: "<<1070*8<<endl;
									}

									else if(weight>10 && weight<=20)
									{
										cout<<endl<<"Payable Amount: "<<1480*8<<endl;
									}

									else
									{
										cout<<endl<<"Weight Value Not Applicable";
									}
								}

								else if(d>4000 && d<=4500)
								{

									if(weight<=2)
									{
										cout<<endl<<"Payable Amount: "<<510*9<<endl;
									}

									else if(weight>2 && weight<=6)
									{
										cout<<endl<<"Payable Amount: "<<820*9<<endl;
									}

									else if(weight>6 && weight<=10)
									{
										cout<<endl<<"Payable Amount: "<<1070*9<<endl;
									}

									else if(weight>10 && weight<=20)
									{
										cout<<endl<<"Payable Amount: "<<1480*9<<endl;
									}

									else
									{
										cout<<endl<<"Weight Value Not Applicable";																			
									}
								}

								else if(d>4500 && d<5000)
								{

									if(weight<=2)
									{
										cout<<endl<<"Payable Amount: "<<510*10<<endl;
									}

									else if(weight>2 && weight<=6)
									{
										cout<<endl<<"Payable Amount: "<<820*10<<endl;
									}

									else if(weight>6 && weight<=10)
									{
										cout<<endl<<"Payable Amount: "<<1070*10<<endl;
									}

									else if(weight>10 && weight<=20)
									{
										cout<<endl<<"Payable Amount: "<<1480*10<<endl;
									}

									else
									{
										cout<<endl<<"Weight Value Not Applicable";																				
									}
								}

								else
								{
									cout<<endl<<"Distance Criteria Not Matched";		
								}
							
							cout<<endl<<"Press 0 in case of leaving this Question, else press any button\t";
							cin>>j;
							
							}
							else
							{
								cout<<endl<<"Invalid Value Input";
								
								cout<<endl<<"Press 0 in case of leaving this Question, else press any button\t";
								cin>>j;
							}
							
					}while(j!=0);
					
			cout<<endl<<endl<<endl;
			break;
		
			case 3:
				cout<<"\n\t\t**QUESTION "<<n<<"**"<<endl<<endl;
				
				
				
							cout<<endl<<"\t\t ***TICKET GHAR***"<<endl;
							
							cout<<endl<<"How many total Members requiring the entrance: "<<setw(4);
							cin>>family;
							
							cout<<endl<<endl<<"First inform us by the gender (Either Male or Female)!";
						
							for(i=1; i<=family;)
							{
								cout<<endl<<"For Member "<<i<<"\n\nPress 1 for Male and 0 for Female ";
								cin>>gender;
								
								cout<<"Enter age of member "<<i<<endl;
								cin>>age;
								
								if(age>0 && age<=12)
								{
									if(gender==1)
									{
										male++; i++;
									}
									else if(gender==0)
									{
										f_male++; i++;
									}
									else
									{
										gender=false;
									}
									bill = bill+25;
								}
							
								else if(age>12 && age<=19)
								{
									if(gender==1)
									{
										male++; i++;
									}
									else if(gender==0)
									{
										f_male++; i++;
									}
									else
									{
										cout<<"\n Error "; i=i;
									}
									bill = bill+35; 
								}
						
								else if(age>19 && age<=50)
								{
									if(gender==1)
									{
										male++; i++;
									}
									else if(gender==0)
									{
										f_male++; i++;
									}
									else
									{
										cout<<"\n Error "; i=i;
									}
									bill = bill+50;
								}
						
								else if(age >50 )
								{
									if(gender==1)
									{
										male++; i++;
									}
									else if(gender==0)
									{
										f_male++; i++;
									}
									else
									{
										cout<<"\n Error "; i=i;
									}
									bill = bill+20;
								}
								
								else
									cout<<endl<<"Cannot Process";
							}
							
							cout<<endl<<"Your Evaluated bill is "<<bill;
							cout<<endl<<"Male are "<<male<<" and Female are "<<f_male;
							
							bill=(bill*0.05)+bill;
							cout<<endl<<"Net Total: "<<bill;
							
			
					
			cout<<endl<<endl<<endl;
			break;
	
			case 4:
				cout<<"\n\t\t**QUESTION "<<n<<"**"<<endl<<endl;
				
											
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
			
					
			cout<<endl<<endl<<endl;
			break;
	
			case 0:
				cout<<endl<<"\t\t\tQuitting the Screen. Thanks";
			
			break;
		
		default:
				cout<<endl<<"Invalid Input, Question Number not matching";
				
		}
		
		}while(i!=0);
		
		
		
		
	}//			**CLOSING OF NEW BODY**
	
	
	
	
}
