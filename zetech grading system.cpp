/*AUTHOR: AARON KIMUTAI ROP
Reg No:BSE-01-0082/2025 
Description:  Zetech grading system
Date : 27/05r/2025
Version 1
*/

#include<iostream>
using namespace std;

int main(){
	int marks,programming,computer,maths,average,total_marks;
	cout<<"enter marks for programming"<<endl;
	cin>>programming;
	
	cout<<"enter marks for computer"<<endl;
	cin>>computer;
	
	cout<<"enter marks for maths"<<endl;
	cin>>maths;
	
	total_marks=programming + computer + maths;
	average=total_marks/3;
	
	if(average>=70&& average<=100){
		
		cout<<("your grade is A")<<endl;
		
	}
	else if(average>=60 && average<70){
		
		cout<<("your grade is B")<<endl;
	}
		
		else if(average>=50 && average<60){
			
			cout<<("you grade is C")<<endl;
			
		}
		
		else if(average>=40 && average<50){
			
			cout<<("your grade is d")<<endl;
			
		}
		else
		{
			cout<<("fail")<<endl;
		}
		return 0;
}
	
	
	
