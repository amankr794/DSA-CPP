#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    /** upper half **/
    for(int i=0; i<n; i++){

        //print 2*i+1 characters/columns in every rows
        //print stars only at odd columns
        for(int j=0; j<2*i+1; j++){
            if(j%2)
                cout<<"*";
            else
                cout<<i+1;
        }
        //new line
        cout<<endl;
    }

     /** lower half **/
    for(int i=0; i<n; i++){

        //print 2*n-(2*i+1) characters/columns in every rows
        //print stars only at odd columns
        for(int j=0; j<2*n-(2*i+1); j++){
            if(j%2)
                cout<<"*";
            else
                cout<<n-i;
        }
        //new line
        cout<<endl;
    }

    return 0;
}