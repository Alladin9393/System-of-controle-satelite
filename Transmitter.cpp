#include "Transmitter.h"


namespace root {
	Transmitter::Transmitter()
	{ 
		hash = "";
	}


	Transmitter::~Transmitter()
	{
	}

	int Transmitter::receivingExestCodes(int x)
	{
		// ANSI
		x += 256;
		while (!(((x <= 57) && (x >= 48)) || ((x <= 90) && (x >= 65)) || ((x <= 122) && (x >= 97))))
		{
			if (x < 48)
			{
				x += 24;
			}
			else
			{
				x -= 47;
			}
		}
		return x;
	}

	int Transmitter::getControlSum(string str)
	{
		ui sault = 0, strlen = 0;
		for (; strlen < str.size(); strlen++)
			sault += int(str[strlen]);
		return sault;
	}

	string Transmitter::getHash(string userString, ui lenthash)
	{
		if (lenthash > 3)
		{
			ui minLen = 2;
			ui RealMinLen = 0; // Приближенная
			ui originalSault = this->getControlSum(userString);
			ui originalLenghtStr = (userString.size());

			while (minLen <= lenthash) // Получение кратного хеша
				RealMinLen = (minLen *= 2);

			while (minLen <= originalLenghtStr) // кратность строки
				minLen *= 2;

			if ((minLen - originalLenghtStr) < minLen) // делаем длину хеша в 2 р больше
				minLen *= 2;

			int addCount = minLen - originalLenghtStr; // разность

			for (int i(0); i < addCount; i++)
				userString += this->receivingExestCodes(userString[i] + userString[i + 1]);

			int maxSault = this->getControlSum(userString);
			int maxLenghtStr = (userString.size());

			//Определение сжатия
			while (userString.size() != RealMinLen)
			{
				for (int i(0), center = userString.size() / 2; i < center; i++)
					this->hash += this->receivingExestCodes(userString[center - i] + userString[center + i]);
				userString = this->hash;
				this->hash.clear();
			}

			// Привидение к длине исх хеша
			ui rem = RealMinLen - lenthash;

			for (ui i(0), countCompress = RealMinLen / rem; this->hash.size() < (lenthash - 4); i++)
			{
				if (i % countCompress == 0)
					this->hash += this->receivingExestCodes(userString[i] + userString[++i]);
				else
					this->hash += userString[i];
			}

			this->hash += this->receivingExestCodes(originalSault);
			this->hash += this->receivingExestCodes(originalLenghtStr);


			this->hash += this->receivingExestCodes(maxSault);
			this->hash += this->receivingExestCodes(maxLenghtStr);

			return this->hash;
		}
		return "";
	}

}