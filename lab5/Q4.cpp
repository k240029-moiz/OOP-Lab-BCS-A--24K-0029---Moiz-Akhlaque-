
#include <iostream>
using namespace std;

class CallRecords{
	int id;
	int mint;
	static int record;
	public:
	CallRecords(int i=0,int m=0)
	{
		id=i;
		mint=m;
		record++;	
	}
	
	static void getTotalCalls()
	{
		cout<<"the total calls are:"<<record;
	}
		
};

	int CallRecords::record=0;

int main()
{
	CallRecords call[20];
	
	CallRecords::getTotalCalls();
}
