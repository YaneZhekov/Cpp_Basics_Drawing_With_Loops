#include <iostream>
using namespace std;


int main()
{
    int n;

    cin >> n;

	for (int row = 1; row <= n; row++)
	{
		for (int m = 1; m <= n - row; m++)
		{
			cout << " ";
		}
		cout << "*";
		for (int l = 1; l <= row - 1; l++)
		{
			cout << " *";

		}

		cout << endl;
	}
	
	for (int row = n - 1; row >= 1; row--)
	{
		for (int m = 1; m <= n - row; m++)
		{
			cout << " ";
		}
		cout << "*";
		for (int l = 1; l <= row - 1; l++)
		{
			cout << " *";

		}

		cout << endl;
	}
}

