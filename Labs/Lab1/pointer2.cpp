#include <iostream>

int main() {
  // Dynamically allocate an integer and a pointer to it
  int* p = new int;
  *p = 10;

  // Print the value of p and the value pointed to by p
  std::cout << "p = " << p << ", *p = " << *p << std::endl;

  // Deallocate the memory pointed to by p
  delete p;

  // Set p to null to prevent it from being used again
  p = nullptr;

  return 0;
}

