#include "DataCenter.h"


namespace Data {
	DataCenter::DataCenter()
	{
		temp = 270.425;
		Energy = 100;
	}


	DataCenter::~DataCenter()
	{
	}

	void DataCenter::changeData()
	{
		const double R = 63.71; // 6 עטסÿק ךל
		const double G = 6.67;
		const double M = 5.97;
		double w, alpha;
		w = speed / H;
		Satellite::changeData();
		alpha = w*time;
		E = H*cos(alpha);
		W = H*sin(alpha);
		H = (G*M * 100 / (speed*speed)) - R;
		Energy = (2*time) / (speed*880);
		if (Energy <= 0)
			Energy = 10;
		else if (Energy > 100)
			Energy = 100;
		temp = (((speed*speed) * 150) + (H+W)) / 100;
		if (H <= 0)
		{
			H = 0;
			speed = 0;
			Energy = 0;
			temp = 0;
			cin.get();
			system("cls");
			cout << endl << "Lost conection...... " << endl << endl;
			system("pause");
			exit(0);
		}
	}

}
