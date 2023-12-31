#include<iostream>
using namespace std;
int main()
{   //read no. of rows
    int n;
    cin>>n;

    //outer loop --> rows
    for(int i=0; i<n; i++){

        //inner loop --> columns
        for(int j=0; j<n; j++){
            cout<<"*";
        }
        //next line
        cout<<endl;
    }
    return 0;
}