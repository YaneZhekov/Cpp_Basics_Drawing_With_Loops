#include <iostream>
using namespace std;


int main()
{
	int n;

	cin >> n;

	for (int rows = 1; rows <= n; rows++)
	{
		for (int l = 1; l <= rows; l++)
		{
			cout << "$" << " ";
		}
		cout << endl;
	}
}

