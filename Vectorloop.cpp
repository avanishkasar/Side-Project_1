#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int number;
  int factorial = 1;
  cin >> number ; 
  for (int i = 1; i <= number; i++)
  {
    factorial *= i; 
  }
  cout << "factorial of " << number << "=" << factorial << endl;
}
