#include<iostream>
using namespace std;
int main()
{
    int km;

    //read distance into KM
    cout<<"Enter the value in km: ";
    cin>>km;

    /* 1 miles = 1.60934 km*/
    /* 1/1.60934 miles = 1 km */

    cout<<"Value in miles = "<<(1/1.60934) * km;
   
    return 0;
}