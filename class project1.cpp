#include <iostream>
#include <math.h>
using namespace std;

int product (int x, int y);
float division (float a, float b);
int addition (int x, int y){
return x + y;
}
int intrest(int p,int t,int r){
	return(p*t*r)/100;
}

int main(){
	int sum,num1,num2;
	cout<<"Funtions in C++"<<endl;
	cout<<"Enter the first number"<<endl;
	cin>>num1;
	cout<<"Enter the second number"<<endl;
	cin>>num2;
	//calling function-arguments
	sum = addition (num1,num2);
	cout<<"Caling Addition"<<sum<<endl;
	
	
	int multiplication;
	multiplication=product (10, 20);
	cout<<"Calling product"<<multiplication<<endl;
	
	float marks;
	marks=division (10, 30);
	cout<<"Calling division"<<marks<<endl;
	

	int simple,principle,rate,time;
	cout<<"Enter the principle amount"<<endl;
	cin>>principle;
	cout<<"Enter the rate"<<endl;
	cin>>rate;
	cout<<"Enter your time"<<endl;
	cin>>time;
	
	simple=intrest(principle,2,rate);
	cout<<"You inntrest is"<<simple<<endl;
	return 0;

	
	
}
int product(int x, int y){
	return x * y;
}
float division (float a, float b){
	return a/b;
}