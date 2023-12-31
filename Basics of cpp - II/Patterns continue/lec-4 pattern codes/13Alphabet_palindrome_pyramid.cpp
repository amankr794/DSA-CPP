#include<iostream>
using namespace std;
int main()
{   
    //Read no. of rows
    int n;
    cin>>n;

    // //print n rows
    // for(int i=0; i<n; i++){

    //     char ch='A';

    //     //print alphabet from A in inc order
    //     for(int j=0; j<=i; j++){
    //         cout<<ch++<<" ";
    //     }

    //     ch=ch-1;
    //     ////print alphabet in dec order upto A
    //     for(int j=0; j<i; j++){
    //         cout<<--ch<<" ";
    //     }

    //     //new line
    //     cout<<endl;
    // }


    //or
    
    //print n rows
    for(int i=0; i<n; i++){

        char ch = 'A' - 1;
    
        for(int j=0; j<2*i+1; j++){
            if(j<=i){
                //print alphabet from A in inc order
                cout<<++ch<<" ";
            }
            else{
                //print alphabet from in dec order upto A
                cout<<--ch<<" ";
            }
        }

        //new line
        cout<<endl;
    }


    return 0;
}