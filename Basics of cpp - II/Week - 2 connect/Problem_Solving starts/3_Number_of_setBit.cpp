/** Print Number Of Set Bits **/
#include<iostream>
using namespace std;
int main()
{   
    
    int num;

    //read number
    cin>>num;

    int countSetBit = 0;

    while(num!=0){

        //found one set bit
        // so increment set bit count
        if(num&1)
            countSetBit++;
        
        //right shift
        num>>=1;;
    }
    cout<<"Number of set bits "<<countSetBit;

    return 0;
}