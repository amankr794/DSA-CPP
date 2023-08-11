#include <iostream>
using namespace std;
int b;
int main()
{

    /*************************** bitwise not operator ***************************/
    // bool a = false;
    // bool b = true;
    // cout << ~a << " " << ~b;      // -1 -2
    // cout << (~a) << " " << (~b);  // -1 -2
    // cout << ~(a) << " " << ~(b);  // -1 -2

    // a=(~a); cout<<a;     // 1
    // a=~(a); cout<<a;     // 1
    // b = (~b);cout << b;  // 1
    // b = ~(b);cout << b;  // 1

    // int c;
    // c=(~a); cout<<a<<" "<<c<<endl;  // 0 -1
    // c=~(a); cout<<a<<" "<<c;        // 0 -1

    // int x = (5 > 9);
    // cout<<~x<<endl;
    // x = ~x;
    // cout << x;

   
   
    /*********************************************** leftshift operator ******************************************/

    // int a = 12;
    //  a = a << 4;
    //  cout << a;

    // Q> Can we use -ve operand in left shift operator (2nd operand shouldn't be -ve oterwise undefined behaviour show hoga )

    // a = a << -1;
    // cout << a << endl;     // undefined value/behaviour

    // cout<<(-12<<2)<<endl;  // -48
    // cout<<(12<<-2)<<endl;  //undefined value/behaviour
    // cout<<(12<<2);         // 48

    // vvi: we can say that when left shift hota hai to multiply by 2 hota hai

    
    
    /*************************************************** rightshift operator *********************************************************/

    //-ve wala concept is also aplicable for right shift operator
    // cout<<(12>>1)<<endl;    //6
    // cout<<(-12>>1)<<endl;   //-6
    // cout<<(12>>-1);         //undefined value

    // int a = 12;
    // a = a >> 1;
    // cout << a << endl;  //6

    // int a = 25;
    // a = a >> 1;
    // cout << a << endl;  //12

    // int a = 27;
    // a = a >> 1;
    // cout << a << endl;  // 13

    // int a = 3;
    // a = a >> 1;
    // cout << a << endl;  // 1

    // vvi que: can i say confidently that right shift karne se divide by 2 hota hai -- No we can't say
    // int a = -12;
    // a = a << 1;
    // cout << a << endl;  // -24 which is -12*2^1
    
    // int a = -12;
    // a = a >> 1;
    // cout << a << endl;  // -6 which is -12/2^1

    //change the no. then check
    // int a = -27;
    // a = a >> 1;
    // cout << a << endl;  //-14 (-13 nahi aaya)


    // int a = 2147483647;  //binary --> 0111111....1111111 (one 0 and 31 ones)
    // cout<<a<<endl;
    // cout<<(a<<1);    // -2 --> 1111....11110 (31 ones and one 0)


    // int a = -2147483648;   //binary  --> 1000000.....000000 ( one one and 31 zeros)
    // cout<<a<<endl;
    // cout<<(a<<1);  // 0 ---> 00000....00000 (32 zeros)


    // int a = -2147483648;   //binary  --> 1000000.....000000 ( one one and 31 zeros)
    // cout<<a<<endl;
    // cout<<(a>>1);  // why output will not be a +ve n0.?

    
    /**************************************************** shifting by 0 *******************************************************/
    // cout<<(2<<0)<<endl;   // 2/2^0 = 2
    // cout<<(-5<<0)<<endl;  // -5/2^0 = -5

    // cout<<(2>>0)<<endl; // 2*2^0 = 2
    // cout<<(-5>>0)<<endl; // -5*2^0 = -5

    

    /*********************************************** shifting by -ve operand ***********************************************/
    //The left-shift and right-shift operators should not be used for negative numbers. 
    //The result of is undefined behavior if any of the operands is a negative number. 
    //For example results of both 1 >> -1 and 1 << -1 is undefined.

    // cout<<(1<<-1);  //warning: left shift count is negative [-Wshift-count-negative]
    // cout<<(1>>-1);  //warning: right shift count is negative [-Wshift-count-negative]



    /********************************************* shifting by the value more than the size of integer *******************************/
    //If the number is shifted more than the size of the integer, the behavior is undefined. 
    //For example, 1 << 33 is undefined if integers are stored using 32 bits. 

    // cout<<(1<<33);  //warning: left shift count >= width of type [-Wshift-count-overflow]
    // cout<<(-1>>33)  //warning: right shift count >= width of type [-Wshift-count-overflow]

    // cout<<(1<<32);  //warning: left shift count >= width of type [-Wshift-count-overflow]
    // cout<<(-1>>32);  //warning: right shift count >= width of type [-Wshift-count-overflow]

    // cout<<(1<<31)<<endl;  // -2147483648 --> 1000.....00000 (1 ones and 31 zeros)
    // cout<<(1>>31)<<endl;  // 0 --> 000000....000000 (32 zeros)
    // cout<<(2<<31)<<endl;  // warning: result of '(2 << 31)' requires 34 bits to represent, but 'int' only has 32 bits [-Wshift-overflow=]
    // cout<<(2<<30)<<endl;  // -2147483648 --> 1000.....00000 (1 ones and 31 zeros)

    // cout<<(-1<<1)<<endl;  // -1*2^1 = -2
    // cout<<(-1<<4)<<endl;  // -1*2^4 = -16s
    // cout<<(-1<<31)<<endl; // -1*2^31 = -2^31  -1<<31 gives 10000000000000000000000000000000 which is -2147483648

    //cout<<(-1>>1)<<endl;  //-1     
    // cout<<(-1>>10)<<endl;  //-1
    // cout<<(-1>>31)<<endl;  //-1
    // cout<<(-2147483648>>1)<<endl;  //-1073741824
    // cout<<(-2147483648>>1073741824)<<endl;
    // cout<<(-2147483648>>10)<<endl;
    // cout<<(-5>>7)<<endl;   //-1
    // cout<<(-5>>1)<<endl;   //-2
    // cout<<(-18>>1)<<endl;  //-9
    // cout<<(-18>>2)<<endl;  //-5
    // cout<<(-18>>5)<<endl;  //-1
    // cout<<(-18>>10)<<endl;  //-1
    // cout<<(-18>>18)<<endl;  //-1
    // cout<<(-18>>19)<<endl;  //-1





/******************************** pre-increment/pre-decrement and post-increment/post-decrement ****************************/ 

//    int a=6,b=1;
//    cout<<a+++b;

//    int a=5;
//    cout<<(++a)*(++a);

// if(true){
//     b=9;
//     cout<<b;
// }
// cout<<b;



/********************************************************* char datatype doubts ******************************************/


// 1> Character Typecast into Integer

// int a = 'A';  //character 'A' will be typecast into integer ( 'A' ---> 65 )
// cout<<a;

// int a = 'Z';  //character 'Z' will be typecast into integer ( 'Z' ---> 90 )
// cout<<a;

// int a = 'a';  //character 'a' will be typecast into integer ( 'a' ---> 97 )
// cout<<a;

// int a = 'z';  //character 'z' will be typecast into integer ( 'z' ---> 122 )
// cout<<a;

// int a = '0';  //character '0' will be typecast into integer ( '0' ---> 48 )
// cout<<a;

// int a = '1';  //character '1' will be typecast into integer ( '1' ---> 49 )
// cout<<a;

// int a = '9';  //character '9' will be typecast into integer ( '9' ---> 57 )
// cout<<a;

// int a = 'AB';  // warning: multi-character character constant
// cout<<a;       // O/P: Garbage Value

// int a = 'bcA';  // warning: multi-character character constant
// cout<<a;         // O/P: Garbage Value

// int a = '167';  // warning: multi-character character constant
// cout<<a;        // O/P: Garbage Value


// char ch = '1';
// cout<<ch;     //1


// char ch = '12';  //multi-character character constant [-Wmultichar]   overflow in implicit constant conversion [-Woverflow]
// cout<<ch; // 2

// char ch = 'abC';  //multi-character character constant [-Wmultichar]  overflow in implicit constant conversion [-Woverflow]
// cout<<ch; // C



// 2> Integer Typecast into character

// char a = 97;  // integer 97 typcast into character 'a';
// cout<<a;

// char a = 122;  // integer 122 typcast into character 'z';
// cout<<a;

// char a = 65;  // integer 65 typcast into character 'A';
// cout<<a;

// char a = 90;  // integer 90 typcast into character 'Z';
// cout<<a;

// char a = 48;  // integer 48 typcast into character '0';
// cout<<a;

// char a = 49;  // integer 49 typcast into character '1';
// cout<<a;

// char a = 57;  // integer 57 typcast into character '9';
// cout<<a;

// char a = 126;  // integer 126 typcast into character '~';
// cout<<a;

// char a = 127;  // integer 127 typcast into character delete(not printable character);
// cout<<a;

// char a = 255; // integer 255 typcast into character which is not a printable character);
// cout<<a;

// char a = 256;  // warning: overflow in implicit constant conversion [-Woverflow]
// cout<<a;

// char a = 1278;  // warning: overflow in implicit constant conversion [-Woverflow]
// cout<<a;

 


// 3> Two different integers having the same binary representation. Hence they are associated with the same character in ascii table

// char a = 128;  // 128 and -128 have same binary rep. hence the typecast into the same character
// cout<<a;

// char b = -128;
// cout<<b;


// char a = 129;  // 129 and -127 have same binary rep. hence the typecast into the same character
// cout<<a;

// char b = -127;
// cout<<b;

// char a = 255;  // 255 and -1 have same binary rep. hence the typecast into the same character
// cout<<a;

// char b = -1;
// cout<<b;


/* Note: Typecasting is compile time */

// int a;
// cin>>a;  //a
// cout<<a; //0

// int a;
// cin>>a;  //A
// cout<<a; //0

// int a;
// cin>>a;  //aBa
// cout<<a; //0

// int a;
// cin>>a; //56sd
// cout<<a; //56

// int a;
// cin>>a; //5.789
// cout<<a; //5

// int a;
// cin>>a; //.789
// cout<<a; //0

// float a;
// cin>>a; //.789
// cout<<a; //0.789


// char ch ;
// cin>>ch;   //1
// cout<<ch;  //1

// char ch ;
// cin>>ch;   //5
// cout<<ch;  //5

// char ch ;
// cin>>ch;   //678
// cout<<ch;  //6

// char ch ;
// cin>>ch;   //abc
// cout<<ch;  //a
}
