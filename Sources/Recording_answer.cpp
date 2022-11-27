#include <iostream>
#include <Header.h>
#include <fstream>
#include <string>
#include <iostream>


namespace mt
{
	void Recording_answer(int Mat[])
	{
		int count = -1;
		char mat;
		std::string name;
		name = "Matrix.txt";
		std::ofstream file(name);

		int X = 0, Y = 0;
		X = mt::Read_XY(1);
		Y = mt::Read_XY(2);

		std::ofstream cur;
		cur.open(name);
		for (int i = 0; i < X; i++)
		{
			for (int j = 0; j < Y; j++)
			{
				count++;
				cur << Mat[count] << " ";
			}
			cur << std::endl;
		}
	}
}

