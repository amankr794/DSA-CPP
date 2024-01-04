/** Create Number Using Digits **/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //create Array of digits
    int digit[]={8,2,3,7};

    int ans=0;
    
    for(int i=0; i<4; i++){
        ans = ans*10 + digit[i];
    }
    cout<<ans;
    
    return 0;
}