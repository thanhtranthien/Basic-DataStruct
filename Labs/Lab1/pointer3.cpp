#include <iostream>

int main() {
  // Declare an integer variable and a pointer to it
  int x = 10;
  int* p = &x;

  // Declare a pointer to the pointer p
  int** pp = &p;

  // Print the value of x, the address of x, 
  // the value of p, and the value pointed to by p
  std::cout << "x = " << x << ", &x = " << &x << std::endl;
  std::cout << "p = " << p << ", *p = " << *p << std::endl;

  // Modify the value of x through the pointer to the pointer
  **pp = 20;

  // Print the new value of x
  std::cout << "x = " << x << std::endl;

  return 0;
}

