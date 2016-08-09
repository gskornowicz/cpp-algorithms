/*
	This piece of code was made by Grzegorz Skornowicz
	You can contact me at g.skornowicz@gmail.com
	You can clone this code from GIT repository under link:
	This software is free to use by anybody
	May The Force Be With You !!!
*/

#include <iostream>

using namespace std;

int euclideanAlghorithm(int a, int b)
{
	int c;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}


int main()
{
	int a, b;

	cout << "Greatest common divisor (GCD) using Euclides modulo alghoritm" << endl;
	cout << "This piece of code was written by Grzegorz Skornowicz index nr 5899" << endl;
	cout << "=============================================================" << endl;
	cout << "Please type in two integer a & b numbers to look for GCD of theese numbers" << endl;
	cin >> a >> b;
	cout << "Greatest common divisor of numbers " 
		<< a << " and " << b << " is " << euclideanAlghorithm(a, b) << endl;

    return 0;
}

