/* Week - 2(connect class codes) */

#include <iostream>
using namespace std;
int main()
{
  int age = 25;

  // if (age >= 18)
  //   cout << "Can Vote";
  // else
  //   cout << "Cannot Vote";

  /********************** Conditional/Ternary Operator **********************/
  // Used as Alternative of if-else

  //(age>=18) ? cout << "Can Vote" : cout << "Cannot Vote";

  // int num = 6;
  // (num % 2 == 0) ? cout << "Even" : cout << "Odd";
  
  // cout << ((num % 2 == 0) ? "Even" : "Odd");

/*************************** inc-dec operator *****************************/
int a=5;
int b=10;

int ans1 = (++a)*(--b);
int ans2 = (++a)*(b--);
int ans3 = (a++)*(--b);
int ans4 = (a++)*(b--);

cout<<ans1<<" "<<ans2<<" "<<ans3<<" "<<ans4;

  return 0;
  
}