/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Cameron Parrish
 */

#include "Header.h"

int main() {
	double root1, root2;
	double a, b, c;

	
	std::cout << "Enter value A: ";
	cin >> a;
	std::cout << "Enter value B: ";
	cin >> b;
	std::cout << "Enter value C: ";
	cin >> c;

	// Now that we have a b and c we need to check if b^2 -4ac < 0
	// This is our base case incase it is negative, it would fail in some circumstances otherwise
	if (b * b - 4 * a * c < 0) {
		std::cout << "The function has no real roots";
	}
	else {
		root1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
		root2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
		std::cout << "Root 1: " << root1 << " Root 2: " << root2;
	}

	return 0;
}