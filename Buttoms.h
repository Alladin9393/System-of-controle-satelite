#pragma once
#include <iostream>
#include "Info.h"
#include "Position.h"
#include "ShutDown.h"
#include "Transmitter.h"

using I::Info;
using PP::Position;
using Sd::ShutDown;
using root::Transmitter;

using namespace std;
typedef unsigned int ui;
namespace Buttom {
	class Buttoms
	{
	private:
		ui buttom;
	public:
		Buttoms& operator = (const int p);
		friend istream& operator >> (istream& s, Buttoms& a);
		void ButtomN(Transmitter& a, Transmitter& b, Transmitter& c);
		Buttoms();
		~Buttoms();
	};
}

