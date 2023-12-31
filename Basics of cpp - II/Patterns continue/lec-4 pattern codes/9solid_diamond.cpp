/*  Solid Diamond Pattern = Full Pyramid + Inverted Full Pyramid */


#include<iostream>
using namespace std;
int main()
{
    //read no. of rows
    int n;
    cin>>n;

    /** Full Pyramid **/
    //outer loop --> rows
    for(int i=0; i<n; i++){

        //print n-(i+1) spaces in every rows 
        for(int j=0; j<n-(i+1) /*j<n-i-1*/; j++)
            cout<<" ";
        
        //print (i+1)th star in every rows
        // and print one space after every star 
        for(int j=0; j<=i; j++)
            cout<<'*'<<" ";

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

        // second print (n-i) no. of stars in every rows and print one space after every star
        for (int j = 0; j < n - i; j++)
            cout << '*' << " ";

        // new line
        cout << endl;
    }
    
    return 0;
}

