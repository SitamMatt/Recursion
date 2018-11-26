
#include <iostream>
#include "recursion.h"

namespace recursion {

	//drukowanie napisu rekurencyjnie
	void print(char text[], int i) {
		if (text[i] != 0) {
			std::cout << text[i];
			print(text, i + 1);
		}
		return;
	}

	//drukowanie napisu od ty³u
	void print_reversed(char text[], int i) {
		if (i>=0) {
			std::cout << text[i];
			print_reversed(text, i - 1);
		}
		return;
	}

	int factorial(int n) {
		if (n == 0 || n == 1) return 1;
		return n * factorial(n - 1);
	}

	int factorial_iterative(int n) {
		int silnia = 1;
		for (int i = 1; i <= n; i++) silnia *= i;
		return silnia;
	}

	unsigned int digits(int a) {
		if (a < 10) return 1;
		return 1 + digits(a / 10);
	}

	unsigned int sum_digits(int a) {
		if (a < 10) return a;
		return sum_digits(a / 10) + a % 10;
	}

	unsigned int multiply_digits(int a) {
		if (a < 10) return a;
		return multiply_digits(a / 10) * (a % 10);
	}

	int get_length(char a[], int i) {
		if (a[i] == '\0') return 0;
		return 1+get_length(a, i + 1);
	}
}