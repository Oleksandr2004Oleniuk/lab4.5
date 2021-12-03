// Source45.cpp
// < Оленюк Олександр >
// Лабораторна робота 4.5
// Попадання» у плоску фігуру.
// Варіант 8

#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y, R;
	srand((unsigned)time(NULL));

	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		cout << "R = "; cin >> R;

		if ((y <= R && y >= 0 && y >= -x && x >= -R && x <= 0) ||
			(y <= -R && y < 0 && y <= x && x >= -R && x <= 0) ||
			(y > -R && y < R && pow(y, 2) <= (pow(R, 2) - pow(x, 2)) && x>0 && x <= R))

			cout << "yes" << endl;
		else
			cout << "no" << endl;

	}
	cout << endl << fixed;

		for (int i = 0; i < 10; i++)
		{
			x = R*1.0 * rand() / RAND_MAX - R/2;
			y = R*1.0 * rand() / RAND_MAX - R/2;
			if ((y <= R && y >= 0 && y >= -x && x >= -R && x <= 0) ||
				(y <= -R && y < 0 && y <= x && x >= -R && x <= 0) ||
				(y > -R && y < R && pow(y, 2) <= (pow(R, 2) - pow(x, 2)) && x>0 && x <= R))

				cout << "yes" << endl;
			else
				cout << "no" << endl;
		}
	return 0;
}