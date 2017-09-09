#include "Info.h"
#pragma once
using I::Info;
namespace PP {
	class Position :public Info
	{
	public:
		Position();
		~Position();
		void setData();
		Position& operator = (const int a);
	};
}
