#include <iostream>
#include <windows.h>
#include <conio.h>
#include <vector>
#include <string>
#include "Satellite.h"
#include "ControlSys.h"
#include "Buttoms.h" 
#include "Info.h"
typedef unsigned int ui;

using namespace std;

using AppolloOne::Satellite;
using System::ControlSys;
using I::Info;
int main()
{
	char quit;
	do {
		system("cls");
		ControlSys Base;
		Base.Menu();
		cout << endl << "Continue y/n : " << endl;
	}while (cin >> quit && quit == 'y');
	system("pause");
	return 0;
}