#include <iostream>
using namespace std;

class MobileAccount{
	double balance;
	string phone;
	
public:
	MobileAccount(){
		balance=50;
		phone="";
	}
	MobileAccount(double b,string p){
		balance=b;
		phone=p;
	}
	display(){
		cout<<balance<<"\n"<<"phone:"<<phone<<"\n";
	}
};

int main()
{
    MobileAccount MA;
	MA.display();
	cout<<"parameterized constructors"<<"\n";
	
	MobileAccount MA1 (200,"031235587");
	MA1.display();
	
}
