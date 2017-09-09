#pragma once
#include "Satellite.h"
typedef unsigned int ui;
using AppolloOne::Satellite;

namespace Data{
	class DataCenter: public Satellite
	{
	protected:
		ui Energy;
		double temp;
	public:
		DataCenter();
		~DataCenter();
		void changeData();
	};
}	
