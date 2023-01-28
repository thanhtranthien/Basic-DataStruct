#include <iostream>

int main() {
  // Declare an integer variable and a pointer to it
  int x = 10;
  int* p = &x;

  // Print the value of x and the address of x
  std::cout << "x = " << x << ", &x = " << &x << std::endl;

  // Print the value of p and the value pointed to by p
  std::cout << "p = " << p << ", *p = " << *p << std::endl;

  // Modify the value of x through the pointer
  *p = 20;

  // Print the new value of x
  std::cout << "x = " << x << std::endl;

  return 0;
}

