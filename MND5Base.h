#pragma once
#include <string>
using namespace std;
typedef unsigned int ui;
namespace SHash{
	class MND5Base
	{
	private:
		string	hash;
		int getControlSum(string str);
		int receivingExestCodes(int x);
	public:
		string getHash(string userString, ui lenthash);
		MND5Base();
		~MND5Base();
	};
}

