#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // for(int i=0; i<n ;i++){

    //     for(int j=0; j<n; j++){

    //         if(i==0||j==0||i==n-1||j==n-1)
    //             cout<<"*";
    //         else
    //             cout<<" ";
    //     }
    //     cout<<endl;
    // }

    // or

    for (int i = 0; i < n; i++)
    {
        // print all stars in first and last row
        if (i == 0 || i == n - 1)
        {
            for (int j = 0; j < n; j++)
                cout << "*";
        }
        else
        {
            // print star
            cout << "*";

            // print spaces
            for (int j = 0; j < n - 2; j++)
                cout << " ";

            // print star
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}