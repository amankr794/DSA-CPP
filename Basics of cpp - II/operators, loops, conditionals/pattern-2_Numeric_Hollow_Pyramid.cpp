#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // for (int i = 1; i <= n; i++)
    // {
    //     // print spaces
    //     for (int j = 1; j <= n - i; j++)
    //         cout << " ";

    //     //print colno. and spaces
    //     for (int j = 1; j <= i; j++)
    //     {
    //         if (i==1||j==1||i==n||j==i)
    //             cout<<" "<<j<<" ";
    //         else
    //         cout<<"   ";
    //     }
    //     cout << endl;
    // }


    //or

    // int start=1;
    // for(int i=0; i<n; i++){

    //     //spaces
    //     for(int j=0; j<n-i-1; j++)
    //         cout<<" ";
        
    //     // print 2*i+1 characters n every rows
    //     for(int j=0; j<2*i+1; j++){
    //         //first character/col of each rows
    //         if(j==0)
    //             cout<<1;
    //         //last character/col of each rows
    //         else if (j==2*i)
    //             cout<<i+1;
    //         //last rows print all numbers
    //         else if (i==n-1){
    //             if(j%2==0)
    //                 cout<<++start;
    //             else
    //                 cout<<" ";
    //         }
    //         else
    //             cout<<" ";
    //     }
    //     cout<<endl;
    // }

    int start=1;
    for(int i=0; i<n; i++){

        //spaces
        for(int j=0; j<n-i-1; j++)
            cout<<" ";
        
        // print 2*i+1 characters in every rows
        for(int j=0; j<2*i+1; j++){

            //first rows and last rows print all numbers
            if(i==0 || i==n-1){

                //even places print numbers
                if(j%2==0){
                    cout<<start;
                    start++;
                }
                else
                    //odd places print space
                    cout<<" ";
            }

            // remaining rows
            else{

                //first col print 1
                if(j==0)
                    cout<<1;
                //last col print row+1
                else if (j==2*i)
                    cout<<i+1;
                //remaining col print spaces
                else
                    cout<<" ";
            }

        }
        //new line
        cout<<endl;
    }
    return 0;
}