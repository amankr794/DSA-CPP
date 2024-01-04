/** Print all digits in an integer **/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // read integer
    int num;
    cout << "Enter a number: ";
    cin >> num;

    //using while loop
    while(num!=0){

        //extract digit form num by taking modulo(%) with 10
        int digit = num%10;

        //print the digit
        cout<<digit<<" ";

        //delete the digit from num
        //or update the num
        num/=10;
    }

    // using for loop
    //  for( ; num!=0 ; num/=10){

    //     //extract digit form num by taking modulo(%) with 10
    //     int digit = num%10;

    //     //print the digit
    //     cout<<digit<<" ";

    // }

    /*
        NOTE : But this logic to print Digits of a Number prints the digits in Reverse Order
            num = 5678   digit prints --> 8 7 6 5

        Q> How to prints the digits of a Numner in the same order as the number it is ?
            num = 5678  digits print should be --> 5 6 7 8

    */

    /*
      Logic - Step 1 Digit Count
              Step 2 Find Place value of first digit in the number
              Step 3 Digit Extract and print
              Step 4 update num %= placevalue
              Step 5 update placevalue /= 10
    */

    // int temp = num;
    // int Digitcount = 0;

    // // count digits in the number
    // while (temp)
    // {
    //     temp /= 10;
    //     Digitcount++;
    // }
    // cout<<"Digit Count = "<<Digitcount<<endl;

    // if (Digitcount == 1)
    // {
    //     cout << "1 Digit " << num << endl;
    //     return 0;
    // }


    // // int PlaceValue = pow(10, Digitcount - 1);
    // // cout<<"Place Value of first digit  "<<PlaceValue<<endl;

    // int PlaceValue = 1;
    // while(--Digitcount){
    //     PlaceValue = PlaceValue*10;
    // }
    // cout<<"Place Value of first digit  "<<PlaceValue<<endl;

    // int i = 0;
    // while (num)
    // {

    //     int digit = num;

    //     // digit extract
    //     digit /= PlaceValue;

    //     // print digit
    //     cout << ++i << " Digit  " << digit << endl;

    //     // update num
    //     num %= PlaceValue;
    //     // num -= (digit*PlaceValue);

    //     // reduce/update placevalue by 10
    //     PlaceValue /= 10;
    // }

    return 0;
}