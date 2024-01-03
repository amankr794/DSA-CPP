/* I want to print my Name multiple times*/

#include<iostream>
using namespace std;
int main()
{
    int n;

    //if n=5 print my name 5 times
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=0; i<n; i++)
        cout<<"Aman"<<endl;
    
    //again i want to print my names 6 times
    //so, copy paste same code 
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=0; i<n; i++)
        cout<<"Aman"<<endl;

    //again i want to print my names 10 times
    //so, copy paste same code 
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=0; i<n; i++)
        cout<<"Aman"<<endl;

    
    return 0;
}

/*
    We are achieving our jobs but there is  Issues with this code/copy pasting strategy

    i> code become Bulky or Lengthy
    ii> not resuing the same code snippet we are just copy pasting.
    iii> code becomes Buggy
    iv> Not readable code

    Soln: Using Function we can eliminate these drawbacks 
*/