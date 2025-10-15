
#include <iostream>
using namespace std;

class PetrolPump 
{
	static float PricePerLitre;
	int PumpId;
	int litreFilled;
	
	public:
	PetrolPump(int id , int litre)
	{
		PumpId=id;
		litreFilled=litre;
	}
	printReceipt()
	{
		int total;
		total=PricePerLitre*litreFilled;
		cout<<"the id will be:"<<PumpId<<endl;
		cout<<"the LitreFilled will be:"<<litreFilled<<endl;
		cout<<"the Price Of Litre will be:"<<PricePerLitre<<endl;
		cout<<"the total will be:"<<total<<endl;
		
	}
	
};
	 float PetrolPump::PricePerLitre=270.50;
	
int main()
{
	PetrolPump p1(123,5);
	p1.printReceipt();
	
}
