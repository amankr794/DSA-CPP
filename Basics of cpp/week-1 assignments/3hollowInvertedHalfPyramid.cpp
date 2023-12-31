#include <iostream>
using namespace std;
int main()
{
    // read rows
    int n;
    cin >> n;

    // outer loop --> rows
    for (int i = 0; i < n; i++)
    {

        // // inner loop --> columns
        // for (int j = 0; j < n - i; j++)
        // {
        //     if(i==0||j==0||i==n-1||j==n-(i+1))
        //         cout<<"*";
        //     else
        //         cout<<" ";
        // }

        // cout << endl;


        // or

        // // print star in first and last row
        // if (i == 0 || i == n - 1)
        // {
        //     for (int j = 0; j < n - i; j++)
        //        cout << "*";
        // }
        // else
        // {
        //     // print star
        //     cout << "*";
        //     // print spaces
        //     for (int j = 0; j < n - (i + 2); j++)
        //         cout << " ";
        //     // print star
        //     cout << "*";
        // }


        // or

        for (int j = 0; j < n; j++)
        {
            // print stars in first row, first column of every row  and n-(i+1)th col of every row
            if (i == 0 || j == 0 || j == n - (i + 1))
                cout << "*";
            else
                cout << " ";
        }
        // new line
        cout << endl;
    }

    return 0;
}