/*AUTHOR: AARON KIMUTAI ROP
Reg No:BSE-01-0082/2025 
Description:  Workers net salary
Date : 27/05r/2025
Version 1
*/

#include<iostream>
#include<math.h>
using namespace std;

int net_pay,time;
int gross_pay;
int hours (int x, int y=40);



int main(){
	int taxes,wage;
	cout<<"Enter hours worked in a week"<<endl;
	cin>>time;
	cout<<"Enter the hourly wage in dollars"<<endl;
	cin>>wage;
	//requesting the user to enter the hours worked and hourly wage
	if (time>40){
		//overtime:time and a half for hours exceeding 40
		gross_pay=(40*wage)+((time-40)*1,5*wage);
	}
		else{
			//no overtime
			gross_pay=time*wage;
		}
	
	if (gross_pay<=600)
	{
		//15% of the fist $600
		taxes=gross_pay*0.15;
	}
	else 
	{
		//15% of the first $600 + 20% of the rest
		taxes=(gross_pay*0.15)+((gross_pay-600)*0.2);
	}
	
	net_pay=gross_pay-taxes;
	
	cout<<"gross_pay:\n$"<<gross_pay<<endl;
	cout<<"Your taxes is:\n$"<<taxes<<endl;
	cout<<"Your net_pay is:\n$"<<net_pay<<endl;
	
	
	return 0;
}
