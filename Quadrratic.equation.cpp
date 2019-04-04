// Quadrratic.equation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float a, b, c, x1, x2, coefficients;

	cout << "Enter value a, b and c: ";

	cin >> a >> b >> c;

    coefficients = b * b - 4 * a*c;

		x1 = (-b + sqrt(coefficients)) / (2 * a);
		x2 = (-b - sqrt(coefficients)) / (2 * a);
		

		cout << " The first value of x1 is " << + x1 << endl;
		cout << " The first value of x2 is " << + x2 << endl;
	
	return 0;
}

