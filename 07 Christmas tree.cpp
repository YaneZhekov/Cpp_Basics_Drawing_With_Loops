#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

	for (int i = 0; i <= n; i++)
	{
		for (int l = 1; l <= n - i; l++)
		{
			cout << " ";
		}
		for (int d = 1 ; d <= i; d++)
		{

			cout << "*";
		}
		cout << " | ";
		for (int d = 1; d <= i; d++)
		{

			cout << "*";
		}
		cout << endl;
	}

}
