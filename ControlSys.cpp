#include "ControlSys.h"


namespace System {
	ControlSys::ControlSys()
	{
		A = 0;
		C = 0;
		loIn = false;
		pass = "";
	}


	ControlSys::~ControlSys()
	{
	}

	bool ControlSys::getLoIn()
	{
		const int i = 32;
		cout << "Enter Pass : " << endl;
		cin >> pass;
		if (B.getHash(pass, i) == "RwEpP1vXgrlxPXphUhjinSGvPfcFwMTf")
		{
			loIn = true;
			return true;
		}
		exit(0);
		return 0;
	}

	void ControlSys::load()
	{
		system("cls");
		for (int i(0); i < 5; i++)
			cout << endl;
		cout << "****************VLAD PAVLICHEK********************" << endl;
		cout << endl;
		cout << endl;
	}

	void ControlSys::Menu()
	{
		getLoIn();
		load();
		cout << "********************* Menu ***********************" << endl << endl;
		cout << "#1. Info " << endl << endl;
		cout << "#2. Position " << endl << endl;
		cout << "#3. ShutDown " << endl << endl << endl;
		cout << endl << "**************************************************" << endl << endl;
		cin >> A;
		cout << endl << "**************************************************" << endl << endl;
		A.ButtomN(B, C, D);
	}
}
