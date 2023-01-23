#include <iostream>
using namespace std;
int main()
{
  cout<<"welcome to the calculator"<<endl;
  int num1, num2, operation, A, S, M, D;
  cout << "enter two numbers:";
  cin >> num1 >> num2;

  cout << "you have entered: " << num1 << endl;
       << num2 << endl;
  cout << "press 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division"<<endl;
  cin >> operation;

  if (operation == 1)
  {
    cout << "sum is: " << num1 + num2;
  }
  else if (operation == 2)
  {
    cout << "difference is: " << num1 - num2;
  }
  else if (operation == 3)
  {
    cout << "product is: " << num1 * num2;
  }
  else if (operation == 4)
  {
    cout << "quotient is: " << num1 / num2;
  }
  else
  {
    cout << "you have entered an invalid operation";
  }

  return 0;
}
