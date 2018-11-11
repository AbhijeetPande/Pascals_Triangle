//============================================================================
// Name        : Project_1_Part_A.cpp
// Author      : Abhijeet Pande
// Version     : 1.0.0
// Copyright   : Dont copy pls
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
#include <cmath>

#ifndef MARMOSET_TESTING
int main();
#endif

int pascal_triangle(int n);
long factorial_producer(long initial);
int pascal_triangle_recursive(int n);
long factorial_producer_recursive(long initial);

#ifndef MARMOSET_TESTING
// MAIN FUNCTION --------------------------------------------------------------------------------------------------------------------------------------
int main() {
  std::cout << pascal_triangle(10);
  std::cout << std::endl;
  std::cout << pascal_triangle_recursive(10);
}
// END OF MAIN FUNCTION -------------------------------------------------------------------------------------------------------------------------------
#endif
//RECURSIVE WAY TO PRINT PASCAL'S TRIANGLE -------------------------------------------------------------------------------------------------------------
int pascal_triangle_recursive(int n) {
  long factorial_producer_recursive(long initial);

  long counter = 1;
  std::cout << 1 << std::endl;
  int total_integers = 1;

  while (counter <= n) {
    for (long i = 0; i <= counter; i++) {
      std::cout << ((factorial_producer_recursive(counter)) / ((factorial_producer_recursive(i)) * (factorial_producer_recursive(counter - i)))) << " ";
    }
    std::cout << std::endl;
    total_integers = total_integers + (int) counter + 1;
    counter++;
  }
  return total_integers;
}
// FACTORIAL PRODUCER (RECURSIVE) ---------------------------------------------------------------------------------------------------------------------

long factorial_producer_recursive(long initial) {
  if (initial == 0) {
    return 1;
  } else {
    return factorial_producer_recursive(initial - 1) * initial;
  }
}

// ITERATIVE WAY TO PRINT PASCAL'S TRIANGLE -----------------------------------------------------------------------------------------------------------
int pascal_triangle(int n) {
  long factorial_producer(long initial);

  long counter = 1;
  std::cout << 1 << std::endl;
  int total_integers = 1;

  while (counter <= n) {
    for (long i = 0; i <= counter; i++) {
      std::cout << ((factorial_producer(counter)) / ((factorial_producer(i)) * (factorial_producer(counter - i)))) << " ";
    }
    std::cout << std::endl;
    total_integers = total_integers + (int) counter + 1;
    counter++;
  }
  return total_integers;
}
// FACTORIAL PRODUCER (ITERATIVE) ---------------------------------------------------------------------------------------------
long factorial_producer(long initial) {
  if (initial == 0) {
    return 1;
  }
  if (initial < 0) {
    return 0;
  } else {
    long factorial = 1;
    for (int i = 1; i <= initial; i++) {
      factorial = factorial * i;
    }
    return factorial;
  }
}
