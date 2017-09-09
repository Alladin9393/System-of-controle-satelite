#include "Buttoms.h"

using namespace std;

namespace Buttom {

	Buttoms::Buttoms()
	{
		buttom = 0;
	}

	Buttoms::~Buttoms()
	{
		cout << " ................................................................................................................ " << endl;
	}

	void Buttoms::ButtomN(Transmitter& a, Transmitter& b, Transmitter& c) 
	{
		switch (buttom)
		{
			case(1):
			{
				a.setData();
				break;
			}

			case(2):
			{
				b.setData();
				break;
			}

			case(3):
			{
				c.setData();
				break;
			}

			default:
			{
				break;
			}
		}
	}

	istream& operator>>(istream& s, Buttoms& a)
	{
		cout << "Enter Buttom : " << endl;
		s >> a.buttom;
		return s;
	}

	Buttoms& Buttoms::operator = (const int p)
	{
		buttom = p;
		return *this;	
	}

}