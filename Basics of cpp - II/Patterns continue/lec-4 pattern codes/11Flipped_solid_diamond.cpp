#include<iostream>
using namespace std;
int main()
{
    //read no. of rows
    int n;
    cin>>n;

    /** Upper Half **/
    //outer loop --> rows
    for(int i=0; i<n; i++){
        
        //first print (n-i) stars
        for(int j=0; j<(n-i); j++)
            cout<<"*";

        //second print (2*i+1) spaces
        for(int j=0; j<2*i+1; j++)
            cout<<" ";

        //third print (n-i) stars
        for(int j=0; j<(n-i); j++)
            cout<<"*";

        //new line
        cout<<endl; 
    }

    /** Lower Half **/
    //outer loop --> rows
    for(int i=0; i<n; i++){
        
        //first print (i+1) stars
        for(int j=0; j<i+1; j++)
            cout<<"*";

        //second print (2n-(2i+1)) spaces
        for(int j=0; j<2*n-(2*i+1); j++)
            cout<<" ";

        //third print (i+1) stars
        for(int j=0; j<(i+1); j++)
            cout<<"*";

        //new line
        cout<<endl; 
    }
    return 0;
}