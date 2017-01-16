#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double yearprom, totalprom, month;
	yearprom = 0, totalprom = 0 ;
	int years;
	do
	{
		cout << "Enter years: ";
		cin >> years;
	} while (years < 1);

	for (int y = 1; y <= years; y++) //y = years
	{
		int m = 1;
		while (m <= 12) //m = months
		{
			cout << "enter the average rainfall for month " << m << " of year " << y << ": ";
			cin >> month;
			yearprom += month;
			m++;
		}
		totalprom += yearprom;
		cout << "Total rainfall for year " << y << ": " << yearprom << endl;
		yearprom = 0;
	}
	
	cout << "The Average Rainfall is: " << setprecision(2) <<fixed << showpoint << (totalprom / 12.0) / years << endl;
	system("pause");
}
/*SALIDA

Enter years: 2
enter the average rainfall for month 1 of year 1: 2.35
enter the average rainfall for month 2 of year 1: 4.21
enter the average rainfall for month 3 of year 1: 1.26
enter the average rainfall for month 4 of year 1: 2.84
enter the average rainfall for month 5 of year 1: 3.20
enter the average rainfall for month 6 of year 1: 4.10
enter the average rainfall for month 7 of year 1: 1.87
enter the average rainfall for month 8 of year 1: 4.15
enter the average rainfall for month 9 of year 1: 2.30
enter the average rainfall for month 10 of year 1: 1.21
enter the average rainfall for month 11 of year 1: 1.54
enter the average rainfall for month 12 of year 1: 2.97
Total rainfall for year 1: 32
enter the average rainfall for month 1 of year 2: 1.25
enter the average rainfall for month 2 of year 2: 4.51
enter the average rainfall for month 3 of year 2: 3.86
enter the average rainfall for month 4 of year 2: 2.57
enter the average rainfall for month 5 of year 2: 2.45
enter the average rainfall for month 6 of year 2: 2.12
enter the average rainfall for month 7 of year 2: 2.46
enter the average rainfall for month 8 of year 2: 3.59
enter the average rainfall for month 9 of year 2: 7.10
enter the average rainfall for month 10 of year 2: 5.10
enter the average rainfall for month 11 of year 2: 6.010
enter the average rainfall for month 12 of year 2: 4.13
Total rainfall for year 2: 45.15
The Average Rainfall is: 3.21
Press any key to continue . . .

*/