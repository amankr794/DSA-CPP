#include <iostream>
using namespace std;

//printing name n time using fun
void printName() {
	int n;
	cout<<"Enter the value of n " << endl;

	cin >> n;
	for(int i=0; i<n; i++) {
		cout << "babbar" << endl;
	}
}

void printNumber(int num) {
	cout << num << endl;
}


//maximum of three numbers using fun
int add(int x, int y  );

int findMax(int num1, int num2, int num3) {
	if(num1 > num2 && num1 > num3) {
		return num1;
	}
	else if(num2 > num1 && num2 > num3) {
		return num2;
	}
	else {
		return num3;
	}
}

//n is a parameter (function define me jo data pass/define karte hai use parameter bolte hai)
//return type void is used b/c hme koi value return nahi karna hai only no. print karna hai
void printCounting(int n) {
	for(int i=1; i<=n; i++) {
		cout << i << " ";
	}
	cout << endl;
}


//computing grade of students using fun
char getGrade(int marks) {
	// if(marks >= 90) 
	// 	return 'A';
	// else if(marks >= 80)
	// 	return 'B';
	// else if(marks >= 70)
	// 	return 'C';
	// else if(marks >= 60) 
	// 	return 'D';
	// else
	// 	return 'E';

	//assuming marks is between 0 to 100
	switch(marks/10){
		case 10 : return 'A'; break;
		case 9  : return 'A'; break;
		case 8  : return 'B'; break;
		case 7  : return 'C'; break;
		case 6  : return 'D'; break;
		default: return 'E';
	}
}

//sum of first n numbers using fun
int getSum(int n) {
	int sum = 0;
	for(int i=1; i<=n; i++) {
		sum = sum + i;
	}

	return sum;
}

//sum of even numbers upto n
int getEvenSum(int n) {
	cout << "inside getEveSum Function" << endl;
	cout << "Vlaue of n is " << n << endl;
	
	int sum = 0 ;
	cout << "Initial value of sum is " << sum << endl;
	for(int i = 2; i<=n; i = i + 2) {
		cout << "for value of i: " << i << endl;
		sum = sum + i;
		cout << "sum now become: " << sum << endl;
	}
	cout << "returning sum = " << sum << endl;
	return sum;
}

int main() {

	//function call
	//printName();

	// int a = 5;
	// cout << "Address of a is: " << &a << endl;
	/* & --> address of operator */

	// printNumber(a);

	// int a;
	// cout << "Enter the value of a " << endl;
	// cin >> a;

	// int b;
	// cout << "Enter the value of b " << endl;
	// cin >> b;

	// int sum = add(a, b);

	// cout << "Addition result is: " << sum << endl;

	// //read three numbers using input
	// int a,b,c;
	// cin >> a >> b >> c;
	// int maximumNumber = findMax(a,b,c);
	// cout << maximumNumber << endl;

	// int n;
	// cout << "Enter the value of n" << endl;
	// cin >> n;

	// //n is argument (function inkove/call me jo data pass karte hai use argument bolte hai)
	// printCounting(n);


	// int marks;
	// cout << "Enter the marks: " << endl;
	// cin >> marks;

	// char finalGrade = getGrade(marks);
	// cout << finalGrade << endl;

	// for(int i=0; i<=100; i++) {
	// 	char ans = getGrade(i);
	// 	cout << "Grade for marks = " << i << " is " << ans << endl;
	// }

	// int n;
	// cout << "Enter the value of n " << endl;
	// cin >> n;

	// int ans = getSum(n);

	// cout << "Sum upto " << n << " is  " << ans << endl;

	int n;
	cout << "Enter the value of n " << endl;
	cin >> n;

	cout << "Calling getEvenSum function " << endl;
	int ans = getEvenSum(n);
	cout << "Even sum is  " << ans << endl;
	
	return 0;
}


int add(int x, int y  )
{
	int result = x + y;
	return result;
}
