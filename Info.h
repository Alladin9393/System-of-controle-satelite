#pragma once
#include "Transmitter.h"
using root::Transmitter;
namespace I{
	class Info:public Transmitter
	{
	public:
		void setData(); 
		Info();
		~Info();
	};
}