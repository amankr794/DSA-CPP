// Print Numeric Hollow Inverted Half Pyramid

#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    for(int i=0;i<n;++i){

        for(int /*j=j+1*/ j=i+1; j<=n; j++){

            if(j==i+1 || /*j == n - i - 1*/ j==n || i == 0){

                cout<<j;
            }

            else{

                cout<<" ";
            }
        }

        cout<<endl;
    }



    /*Self code - method-1*/

    // for(int i=0; i<n; i++){
    //     int num=i+1;

    //     //first and last row print all numbers
    //     if(i==0 || i==n-1){
    //         for(int j=0; j<n-i; j++){
    //             cout<<num; num++;
    //         }
    //     }

    //     else{
    //         //remaining middle rows
    //         // first print number;
    //         cout<<num;

    //         //then print spaces
    //         for(int space=0; space<n-(2+i); space++)
    //             cout<<" ";

    //         //last print 8
    //         cout<<n;
    //     }

    //     cout<<endl;
    // }





  /*Self code - method-2*/

    //  for(int i=0; i<n; i++){

    //     int num=i+1;

    //     //first and last row  , first col and last col print numbers
    //     for(int j=0 ;j<n-i; j++){

    //         if(i==0 || i==n-1 || j==0 || j==n-(i+1))
    //             cout<<num;
    //         else
    //             cout<<" ";

    //         num++;
    //     }
    //         cout<<endl;
    // }

return 0;

}