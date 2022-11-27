#include <iostream>
#include <Header.h>
#include <string>
#include <fstream>
#define N 20


// X и Y нужно обозначить в файле XY.txt

int main()
{



    setlocale(LC_ALL, "Russian");
    int X = 0, Y = 0, S, maxi = INT_MIN, mini = INT_MAX, tmp;
    int arr[10][10], matrix[10][10];
    X = mt::Read_XY(1);
    Y = mt::Read_XY(2);
	for (int i = 0; i < X; i++) {
		for (int j = 0; j < Y; j++) {
			std::cin >> matrix[i][j];
			arr[i][j] = matrix[i][j];
			if ((int)(matrix[i][j]) > maxi)
			{
				maxi = (int)(matrix[i][j]);
			}
			if ((int)(matrix[i][j]) < mini)
			{
				mini = (int)(matrix[i][j]);
			}
		}
	}
	if (mt::Checking_condition(maxi, mini))
	{
		for (int i = 0; i < X; i++)
		{
			for (int j = 0; j < Y; j++)
			{
				if (mt::Digits((int)(matrix[i][j])))
				{
					for (int z = 0; z < Y - 1; z++)

					{
						for (int k = 0; k < Y - z - 1; k++)
						{
							if (arr[i][k] > arr[i][k + 1])
							{
								tmp = arr[i][k];
								arr[i][k] = arr[i][k + 1];
								arr[i][k + 1] = tmp;
							}
						}
					}
				}
			}
		}
	}
	std::cout << std::endl;
	int c = -1, Mat[N];
	for (int i = 0; i < X; i++)
	{
		for (int j = 0; j < Y; j++)
		{
			c++;
			Mat[c] = arr[i][j];
		}
	}
	mt::Recording_answer(Mat);
	
	std::cout << "Программа создала txt файл с названием matrix.txt, ищите его в папке с исходниками." << std::endl;

}

    



