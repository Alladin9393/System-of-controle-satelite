#include "Satellite.h"

typedef unsigned int ui;

namespace AppolloOne
{
	Satellite::Satellite()
	{
		speed = 3;	// 3 κμ β ρεκ
		H = 357.0; // 35 ςθρÿχ κμ
		E = 55;
		W = 0;
		time = 0;
		GetSystemTime(&st);
		GetLocalTime(&lt);
	}

	Satellite::~Satellite()
	{
	}


	void Satellite::getT()
	{
		cout << "The System time is : ";
		cout << st.wHour << ":" << st.wMinute << ":" << st.wSecond << " || " << st.wDay << "." << st.wMonth << "." << st.wYear << endl;
		cout << "The Local time is : ";
		cout << lt.wHour << ":" << lt.wMinute << ":" << lt.wSecond << " || " << lt.wDay << "." << lt.wMonth << "." << lt.wYear << endl;
	}
	
	void Satellite::changeData()
	{
		time = st.wHour * 3600 + st.wMinute * 60 + st.wSecond;
	}

}