#ifndef RECURSION_H
#define RECURSION_H
#include <iostream>

namespace recursion {
	void print(char text[], int i=0);

	void print_reversed(char text[], int i);

	int factorial(int n);

	int factorial_iterative(int n);

	unsigned int digits(int a);

	unsigned int sum_digits(int a);

	unsigned int multiply_digits(int a);

	int get_length(char a[], int i = 0);

}

#endif // !RECURSION_H
