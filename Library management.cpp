/*AUTHOR: AARON KIMUTAI ROP
Reg No:BSE-01-0082/2025 
Description:   CLASS project car
Date : 27/05r/2025
Version 1
*/

#include <iostream>
using namespace std;

class  Person{
	protected:
		string name;//private data member to represent the persons name.
		public:
			void setName(string n){//public member function to set the name
				name=n;
				
			}
			//A public member fuction to return the name.
			string getname()const{
				return name;
			}
};
//Class libraryMember to inherit from the Classperson
class LibraryMember :public Person {
	private ://private data member to represent the members ID number and books borrowed
		int memberID; 
		int booksBorrowed;
		
		public: //constructor that initializes name, memmber, Id number and boooks borrowed
			LibraryMember(string n, int id, int borrowed ): memberID(id),booksBorrowed(borrowed){
				setName(n);//call set name
			}
				int getmemberID()const{//public member function to return the members IDnumber.
					return memberID;
				}
				int getBooksBorrowed()const{//public member function to return the members borrowed books
					return booksBorrowed;
				}
				
			
		
};
//Class PremiumMember that inherits from class LIbraryMember.
class PremiumMember :public LibraryMember {
	private:
	
	double membershipFee;
	
	public: //comstructor that initializes name, memberID, booksBorrowed and mebershipfee.
		PremiumMember(string n,int id, int borrowed, double Fee):
		LibraryMember(n, id, borrowed),membershipFee(Fee){
			setName(n); //call setname
			
		}
		
		int getMembershipFee()const{
			return membershipFee;
		}
		
		
};
int main(){
Person P1;
P1.setName ("Viona Kimani");
cout<<"Person Name:"<<P1.getname()<<endl;

LibraryMember Lm1("Aaron Cheruiyot",759764,4);
cout<<"LibraryMember Name:"<<Lm1.getname()<<endl;
cout<<"Library Member ID:"<<Lm1.getmemberID()<<endl;
cout<<"Books Borrowed by library member:"<<Lm1.getBooksBorrowed()<<endl;

PremiumMember pm1 ("Hope Kimani",677848,3,30000);
cout<<"Premium member Name:"<<pm1.getname()<<endl;
cout<<"Premium member ID:"<<pm1.getmemberID()<<endl;
cout<<"Books borrowed:"<<pm1.getBooksBorrowed()<<endl;
cout<<"Premium membership fee:"<<pm1.getMembershipFee()<<endl;

return 0;
}