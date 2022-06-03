#include <iostream>
using namespace std;

int main()
{
    int n, o = 0;

	cin >> n;

	int rows = (n + 1) / 2;
	int roofRows = (n + 1) / 2 - 1;

	for (int i = 1; i <= n; i++)
	{
		if (i < rows)
		{
			for (int l = 1; l <= roofRows; l++)
			{
				cout << "-";
			}
			if (i == 1) 
			{
				if (n % 2 == 0) 
				{
					for (int p = 1; p <= 2; p++)
					{
						cout << "*";
						o = 2;
					}
				}
				else 
				{
					for (int p = 1; p <= 1; p++)
					{
						cout << "*";
						o = 1;
					}
				}
			}
			else 
			{
				for (int p = 1; p <= 2 + o; p++)
				{
					cout << "*";
				}
				o += 2;
			}
			for (int t = 1; t <= roofRows; t++)
			{
				cout << "-";
			}
			roofRows--;
			cout << endl;
		}
		else if (rows == i)
		{
			for (int l = 1; l <= n; l++)
			{
				cout << "*";
			}
			cout << endl;
		}
		else if (i > rows)
		{
			cout << "|";
			for (int k = 1; k <= n - 2; k++)
			{
				cout << "*";
			}
			cout << "|" << endl;
		}
		
	}
}

