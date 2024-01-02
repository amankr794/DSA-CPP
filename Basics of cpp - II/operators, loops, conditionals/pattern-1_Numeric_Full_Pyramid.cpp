#include <iostream>
using namespace std;
int main()
{
    // read no. of rows
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        // print (n-i-1) spaces in each rows
        for (int j = 0; j < n - i - 1; j++)
            cout << ' ' << " ";

        // //print no. in inc order
        // for(int j=i+1; j<=i*2+1; j++)
        //     cout<<j<<" ";
        // //print no. in dec order
        // for(int j=2*i; j>=i+1; j--)
        //     cout<<j<<" ";


        // or


        // int j=i+1;
        // //print no. in inc order
        // for(; j<=i*2+1; j++)
        //     cout<<j<<" ";

        // j=j-1;

        // //print no. in dec order
        // for(;j>i+1;)
        //     cout<<--j<<" ";



        // or


        int start = i;
        for (int j = 0; j < 2 * i + 1; j++)
        {

            if (j <= i)
                cout << ++start << " ";
            else
                cout << --start << " ";
        }

        // new line
        cout << endl;
    }

    return 0;
}