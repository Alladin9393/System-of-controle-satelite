#pragma once
#include "Buttoms.h"
#include "Position.h"
#include "ShutDown.h"
#include "Satellite.h"
using Buttom::Buttoms;
using PP::Position;
using Sd::ShutDown;
using AppolloOne::Satellite;

using namespace std;
namespace System {
	class ControlSys
	{
	private:
		Buttoms A;
		Info B;
		Position C;
		ShutDown D;
		bool loIn;
		string pass;
		bool getLoIn();
	public:
		void load();
		//bool TestSys(Sensor A);
		void Menu();
		//void ButtomN(Info a);
		ControlSys();
		~ControlSys();
	};
}
