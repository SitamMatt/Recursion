#include <iostream>
#include "recursion.h"

using namespace std;

int main() {
	char text[3] = "el";
	//text length - 1 - 1 (null char)
	recursion::print_reversed(text, 1);
	cout << endl;

	int n = 1;
	int silnia = recursion::factorial(n);
	cout << silnia << endl;

	int silnia2 = recursion::factorial_iterative(n);
	cout << silnia2 << endl;

	int digity = recursion::digits(1343298432);
	cout << digity << endl;

	int sum = recursion::sum_digits(151);
	cout << sum << endl;

	int product = recursion::multiply_digits(315);
	cout << product << endl;

	char b[255] = "hell";
	int length = recursion::get_length(b);
	cout << length << endl;

	cout << endl;
	system("pause");
	return 0;
}