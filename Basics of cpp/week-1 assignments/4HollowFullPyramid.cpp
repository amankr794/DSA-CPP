#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        // print spaces
        for (int j = 0; j < n - (i + 1); j++)
            cout << " ";

        // print one star at the start of each row
        cout << "*";

        // print all stars in last row and spaces in remaining rows
        for (int j = 0; j < (2 * i - 1); j++)
        {

            // last rows print all stars
            if (i == n - 1)
                cout << '*';
            else
                cout << ' ';
        }
        // print one star at the end of each row except first row
        if(i>0)
            cout << "*";

        // next line
        cout << endl;
    }
    return 0;
}