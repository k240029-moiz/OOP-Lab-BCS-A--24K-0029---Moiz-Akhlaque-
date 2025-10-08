

#include <iostream>
using namespace std;

class OrderDetails{
	int orderID;
	string itemName;
	const double deliveryfee;
	
	public:
		OrderDetails(int orderID,string itemName,double fee):deliveryfee(fee){
		  	this->orderID=orderID;
			this->itemName=itemName;
		}
		display()
		{
			cout<<"orderID:"<<orderID<<"\n";
			cout<<"itemName:"<<itemName<<"\n";
			cout<<"fee:"<<deliveryfee<<"\n";
		}
		~OrderDetails(){
			cout<<"the order has been archived";
		}
	
};
int main()
{
	OrderDetails d1(201,"pizza",400);
	d1.display();
}
