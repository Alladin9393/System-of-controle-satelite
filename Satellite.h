#pragma once
#include <windows.h>
#include <math.h>
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <vector>
#include <string>
using namespace std;
typedef unsigned int ui;

namespace AppolloOne
{
	
	class Satellite
	{
	protected:
		double speed;
		double H;
		double E, W;
		ui time;
	private:
		SYSTEMTIME st;
		SYSTEMTIME lt;
	public:
		Satellite();
		~Satellite();
		void getT();
		//friend ostream& operator<<(ostream& c, const Satellite& a);
		virtual void changeData();
	};
}

