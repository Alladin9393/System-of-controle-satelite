#include "ShutDown.h"

namespace Sd {
	ShutDown::ShutDown()
	{
	}


	ShutDown::~ShutDown()
	{
	}

	void ShutDown::setData()
	{
		cout << "Shut downing .....";
		for (int i(0); i < 10000; i++)
			cout << "..";
		cout << endl;
		system("cls");
		speed = 0;
		Info::setData();
		cout << endl;
		system("pause");
		exit(0);
	}

	ShutDown& ShutDown::operator = (const int a)
	{
		H = a;
		Info::setData();
		return *this;
	}

}