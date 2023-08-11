#include <iostream>
using namespace std;
int main()
{
    // int n;
    // cin >> n;

    // // outer loop
    // for (int i = 0; i < n; i++)
    // {
    //     // inner loop
    //     for (int j = 0; j < n - i; j++)
    //     {
    //             //print star only at boundary
    //             // i.e print star in first row, last row, first col and last col
    //             //at remaining places print space

    //             if(i==0||i==n-1||j==0||j==n-i-1)
    //                 cout<<"* ";
    //             else
    //                 cout<<"  ";
    //     }
    //      cout<<endl;
    // }

    int n;
    cin >> n;

    // outer loop
    for (int i = 0; i < n; i++)
    { // first and last row me print stars
        if (i == 0 || i == n - 1)
        {
            for (int j = 0; j < n - i - 1; j++)
                cout << "* ";
        }

        else
        {
            // remainging middle rows
            // first star
            cout << "*";
            // then spaces
            for (int space = 0; space < (n - i) - 2; space = space + 1)
            {
                cout << "  ";
            }
            // last star
            cout << "*";
        }
        cout<<endl;
    }
}