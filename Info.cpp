#include "Info.h"


namespace I {
	Info::Info()
	{
	}	 


	Info::~Info()
	{
	}

	void Info::setData()
	{
		Satellite::getT(); 
		DataCenter::changeData();
		cout << endl << "The Hight is : " << H << endl << endl;
		cout << "Speed is a : " << speed << endl;
		cout << endl << "Energy : " << Energy <<  endl;
		cout << endl << "Temp : " << temp << endl;
		cout << endl << " E : "<< E << endl;
		cout << " W : "<< W << endl;
	}
}