#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;

	cin >> n;

	int count = 0;

	for (int row = 1; row <= n; row++)
	{
		int formula = ceil(double(n) / 2);

		if (row == 1 || row == n) {
			for (int l = 1; l <= n * 2; l++)
			{
				cout << "*";
			}
			for (int h = 1; h <= n; h++)
			{
				cout << " ";
			}
			for (int l = 1; l <= n * 2; l++)
			{
				cout << "*";
			}
		}
		else {
			cout << "*";
			for (int g = 1; g <= n + n - 2; g++)
			{
				cout << "/";
			}
			cout << "*";
			
			if (row == formula && count < 1) {
				for (int f = 1; f <= n; f++)
				{
					cout << "|";
				}
				count++;

			}
			else {
				for (int h = 1; h <= n; h++)
				{
					cout << " ";
				}
			}
			cout << "*";
			for (int g = 1; g <= n + n - 2; g++)
			{
				cout << "/";
				
			}
			cout << "*";
			
		}
		cout << endl;

	}
}

