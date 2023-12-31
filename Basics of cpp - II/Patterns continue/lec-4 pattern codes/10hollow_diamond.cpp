/* Hollow Diamond Pattern = Hollow Full Pyramid + Hollow Inverted Full Pyramid */

#include <iostream>
using namespace std;
int main()
{
    // read no. of rows
    int n;
    cin >> n;

    /** Hollow Full Pyramid **/
    //outer loop --> rows
    for(int i=0; i<n; i++){

        //print n-(i+1) spaces in every rows
        for(int j=0; j<n-(i+1) /*j<n-i-1*/; j++)
            cout<<" ";

        //print one star
        cout<<"*";
        // print 2*i-1 no. of spaces
        for(int j=0; j<2*i-1; j++)
            cout<<" ";
        //print one star
        if(i!=0)
            cout<<"*";
        //new line
        cout<<endl;
    }

    /** Inverted Full Pyramid **/
    // outer loop --> rows
    for (int i = 0; i < n; i++)
    {
        // first print i no. of spaces in every rows
        for (int j = 0; j < i; j++)
            cout << " ";

        //print one star
        cout<<"*";
        // print i no. of spaces
        for(int j=0; j<2*n-(2*i+3); j++)
            cout<<" ";
        //print one star
        if(i!=(n-1))
            cout<<"*";

        // new line
        cout << endl;
    }

    /*Method - 2*/
    /** Hollow Full Pyramid **/
    // for (int i = 0; i < n; i++)
    // {

    //     // print n-(i+1) spaces in every rows
    //     for (int j = 0; j < n - (i + 1) /*j<n-i-1*/; j++)
    //         cout << " ";

    //     // print 2*i+1 characters in every rows
    //     // first and last character is star and remaining characters are spaces
    //     for (int j = 0; j < 2 * i + 1; j++)
    //     {

    //         // first character
    //         if (j == 0)
    //             cout << "*";
    //         // last character
    //         else if (j == 2 * i)
    //             cout << "*";
    //         else // spaces
    //             cout << " ";
    //     }

    //     cout << endl;
    // }

    // /** Inverted Full Pyramid **/
    // // outer loop --> rows
    // for (int i = 0; i < n; i++)
    // {
    //     // first print i no. of spaces in every rows
    //     for (int j = 0; j < i; j++)
    //         cout << " ";

    //     // print 2*n-(2*i+1) characters in every rows
    //     // first and last character is star and remaining characters are spaces
    //     for (int j = 0; j < 2 * n - 2 * i - 1; j++)
    //     {

    //         // print star at first and last character
    //         if (j == 0 || j == 2 * n - 2 * i - 2)
    //             cout << "*";
    //         // print spaces
    //         else
    //             cout << " ";
    //     }

    //     cout << endl;
    // }

    return 0;
}