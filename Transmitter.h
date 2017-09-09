  #pragma once
#include "DataCenter.h"
typedef unsigned int ui;

using Data::DataCenter;
namespace root {
	class Transmitter:public DataCenter
	{
	private:
		string	hash;
		int getControlSum(string str);
		int receivingExestCodes(int x);
	public:
		virtual void setData()=0;
		string getHash(string userString, ui lenthash);
		Transmitter();
		~Transmitter();
	};
}