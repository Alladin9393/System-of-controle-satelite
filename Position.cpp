#include "Position.h"


namespace PP {
	Position::Position()
	{
	}


	Position::~Position()
	{
	}

	void Position::setData()
	{
		cout << endl << "Enter The speed : " << endl;
		cin >> speed;
		cout << endl << endl;
		Info::setData();
	}

	Position& Position::operator = (const int a)
	{
		speed = a;
		
		return *this;
	}
}