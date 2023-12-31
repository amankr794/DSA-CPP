#include<iostream>
using namespace std;
int main()
{
    //read no. of rows
    int n;
    cin>>n;

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
    return 0;
}