#include "Info.h"
#pragma once
using I::Info;
namespace Sd {
	class ShutDown:public Info
	{
	public:
		ShutDown();
		~ShutDown();
		void setData();
		ShutDown& operator = (const int a);
	};
}

