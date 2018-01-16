#include "lab1.h"


// Greatest Common Denominator
// PRE: a is a positive integer
// PRE: b is a positive integer
// POST: a and b are unchanged
// RETURN: the greatest common denominator of a and b.
int gcd(const int a, const int b)
{
	int temp;
	int a1 = a;
	int b1 = b;

	while (b1 != 0) {
		temp = a1 % b1;
		a1 = b1;
		b1 = temp;
	}
	return a1;
}

// Fibonacci
// PRE: n is a positive int greater than 0
// POST: n is not changed
// RETURN: the nth positive integer in the Fibonacci sequence.
long long fibonacci(const int n)
{
	int temp = n;
	if (temp == 0 || temp == 1) {
		return temp;
	}
	else {
		return fibonacci(temp - 1) + fibonacci(temp - 2);
	}
}
