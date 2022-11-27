#include <iostream>
#include <Header.h>
#include <fstream>
#include <string>


namespace mt
{
	int Read_XY(int i)
	{
		int mass[10], X;
		char S;
		std::ifstream F;
		F.open("XY.txt");
		for (int k = 0; k < i; k++)
		{
			F >> X;
			mass[k] = int(X);
		}

		return mass[i - 1];
	}
}
