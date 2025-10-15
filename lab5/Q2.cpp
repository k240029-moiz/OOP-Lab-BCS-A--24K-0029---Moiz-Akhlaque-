
#include <iostream>
using namespace std;

class MobileDevice{
	
	string modelname;
	const int IMEI;
	
	public:
		MobileDevice(string name,int imei):IMEI(imei)
		{
			modelname=name;
		}
		
	verifyDevice()const{
		cout<<"the imei is:"<<IMEI<<endl;
		cout<<"the model name is:"<<modelname<<endl;
	}
	
};

int main()
{
	MobileDevice MD("Nokia 3310",14132142155);
	MD.verifyDevice();
 } 
