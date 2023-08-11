#include <iostream>
using namespace std;

int raja = 420; // Global variable

int main()
{

	/******************************** Switch Case ****************************/
	// int val;
	// cout << "Enter the value " << endl;

	// cin >> val;

	// switch (val)
	// {
	// 	int a;
	// 	cin >> a;

	// case 1 < 9.98 || 1 < 0:
	// 	cout << "Love ";
	// 	cout << a;
	// 	break;
	// case 'a':
	// 	cout << "Babbar";
	// 	cout << a;
	// 	break;
	// case 3:
	// 	cout << "Ramesh";
	// 	break;
	// case 4:
	// 	cout << "Rahul";
	// 	break;
	// default:
	// 	cout << "Suresh";
	// }

	/****************************** vairable scoping ***************************/
	// // decalaration
	//  int a;
	// // initialisation
	//  int b = 5;
	// // updation
	//  b = 10;
	//  cout << raja << endl;

	// if(true) {
	// 	int b = 15;
	// 	int raja = 421;
	// 	cout << b << endl;
	// 	cout << raja << endl;
	// }
	// cout << b << endl;

	/****************************** Continue keyword ******************************/
	// for(int i=0; i<5; i++) {
	// 	continue;
	// 	cout << "Babbar" << endl ;
	// }

	// for(int i=0; i<5; i++) {
	// 	cout<<i<<" ";
	// 	continue;
	// 	cout << "Babbar" << endl ;
	// }

	/***************************** Break Keyword ***********************************/
	// int n = 5;
	// for(int i=0; i<n; i++) {
	// 	cout << "Babbar" << endl;
	// 	break;
	// }
	// cout << "Love " << endl;

	// int n = 5;
	// for (int i = 0; i < n; i++)
	// {
	// 	cout << "Babbar" << endl;
	// 	if (i == 3)
	// 	{
	// 		cout << "at i = " << i << " loop breaks" << endl;
	// 		break;
	// 	}
	// }
	// cout << "Love " << endl;

	/*************************************** increment and decrement operator ******************************/
	// int a = 5;
	// cout << (++a) * (++a) << endl;

	// int a = 6;
	// int c = a++ + 1;
	// cout << c;

	// int a = 11;
	// cout << a++;
	// cout<< endl << a << endl;

	/***************************** Bitwise left shift and Bitwise right shift operator *********************************/
	// int a = -27;
	// a = a >> 1;
	// cout << a << endl;

	// int a  = 12;
	// a = a << 3;
	// cout << a << endl;

	// bool a = false;
	// bool b = true;
	// a = (~a);
	// a = ~(a);
	// cout << (~a) << endl;
	// //cout <<  (a | b) ;
	// 	// cout << (a^b) ;

	// cout << (5 & 10 ) << endl;


	/************************************* Patterns *************************************/
	
/*
	Numeric Hollow Pyramid
		n=5
        1
       1 2
      1   3
     1     4
    1 2 3 4 5
*/
	// int n;
	// cin >> n;
	// for (int row = 0; row < n; row = row + 1)
	// {
	// 	// spaces
	// 	for (int col = 0; col < n - row - 1; col = col + 1)
	// 	{
	// 		cout << " ";
	// 	}

	// 	// numerbers with spaces in between
	// 	int start = 1;
	// 	for (int col = 0; col < 2 * row + 1; col = col + 1)
	// 	{
	// 		// first row or last row
	// 		if (row == 0 || row == n - 1)
	// 		{
	// 			if (col % 2 == 0)
	// 			{
	// 				// even
	// 				cout << start;
	// 				start = start + 1;
	// 			}
	// 			else
	// 			{
	// 				// odd
	// 				cout << " ";
	// 			}
	// 		}
	// 		else
	// 		{
	// 			// first col
	// 			if (col == 0)
	// 			{
	// 				cout << 1;
	// 			}
	// 			else if (col == 2 * row + 1 - 1)
	// 			{
	// 				cout << row + 1;
	// 			}
	// 			else
	// 			{
	// 				cout << " ";
	// 			}
	// 		}
	// 	}
	// 	cout << endl;
	// }


/*
	Numeric Full Pyramid
		n=5                 n=6
     	 1					1
    	232				   232
   	   34543			  34543
  	  4567654			 4567654
 	 567898765		    567898765
					   67891011109876        
      
*/
	// int n;
	// cin >> n;
	// for(int row=0; row < n; row = row + 1) {
	// 	//spaces
	// 	for(int col =0; col <n-row-1; col = col + 1) {
	// 		cout << " ";
	// 	}

	// 	//numbers
	// 	for(int col = 0; col < row+1; col = col + 1) {
	// 		cout << row + col + 1 ;
	// 	}

	// 	//reverse counting
	// 	int start = 2*row;
	// 	for(int col=0; col <row; col = col + 1) {
	// 		cout << start;
	// 		start = start - 1;
	// 	}

	// 	cout << endl;
	// }



/*
	Number half pyramid
	n=5
	1 
	2 3 
	3 4 5 
	4 5 6 7 
	5 6 7 8 9
*/
	// int n;
	// cin >> n;
	// for(int row=0; row<n; row = row + 1) {
	// 	//row+1 elements print krne wale hai
	// 	int start = row+1;
	// 	for(int col = 0; col < row+1; col = col + 1) {
	// 	//	cout << row + col + 1 << " ";
	// 		cout << start <<" ";
	// 		start = start + 1;
	// 	}
	// 	cout << endl;

	// }

}
