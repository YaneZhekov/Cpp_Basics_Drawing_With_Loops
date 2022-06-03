#include <iostream>
using namespace std;


int main()
{
    int n;
    
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
       
        if (i > 1 && i < n) {
            cout << "|" << " ";
        }
        else {
            cout << "+" << " ";
        }

        for (int l = 1; l <= n-2; l++)
        {
            
            cout << "-" << " ";
        }

        if (i > 1 && i < n) {
            cout << "|" << " ";
        }
        else {
            cout << "+" << " ";
        }
        cout << endl;
    }
}

