#include <Header.h>
#include <math.h>
namespace mt
{
	bool Digits(int a)
	{
		int Digit;
		a = abs(a);
		while (a > 0)
		{
			Digit = a % 10;
			if (Digit == 8)
			{
				return true;
			}
			a = a / 10;
		}
		return false;
	}
}