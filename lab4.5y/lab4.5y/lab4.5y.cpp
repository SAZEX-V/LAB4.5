#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y , R;
	cout << "R = "; cin >> R;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		if ((y >= pow((x - 1), 2) && R >= pow((x - 0), 2) + pow((y - 0), 2) && y >= 0 && x >= 0) ||
			(pow((R), 2) >= pow((x - 0), 2) + pow((y - 0), 2) && y <= 0 && x <= 0))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;
		for (int i = 0; i < 10; i++)
		{
			x = 2 * R * rand() / RAND_MAX - R;
			y = 2 * R * rand() / RAND_MAX - R;
			if ((y >= pow((x - 1), 2) && R >= pow((x - 0), 2) + pow((y - 0), 2) && y >= 0 && x >= 0) ||
				(pow((R), 2) >= pow((x - 0), 2) + pow((y - 0), 2) && y <= 0 && x <= 0))
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
			else
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "no" << endl;
		}
	return 0;
}
