/*
	This piece of code was made by Grzegorz Skornowicz
	You can contact me at g.skornowicz@gmail.com
	You can clone this code from GIT repository under link:
	This software is free to use by anybody
	May The Force Be With You !!!
*/

#include <iostream>
#include <iomanip>

using namespace std;

void fibnumber(int n)
{
	long double *p;
	p = new long double[n];
	if (n == 0) cout << "0";
	else if (n == 1) cout << "1";
	else
	{
		p[0] = 0;
		p[1] = 1;
		for (int i = 2; i <= n; i++)
		{
			p[i] = p[i - 1] + p[i - 2];
		}
		for (int i = 0; i <= n; i++)
		{
			cout << i << " - " << p[i] << "\n";
		}
	}
	//delete [] p; // FIX dynamic allocation heap error after delete of array???
}


int main()
{
	int n;

	cout << "Fibonacci number function to n place" << endl;
	cout << "This piece of code was written by Grzegorz Skornowicz index nr 5899" << endl;
	cout << "=============================================================" << endl;
	cout << "please type in n number, n marks how many fibonnaci numbers you want to get." << endl;
	cin >> n;
	cout << fixed;
	cout << setprecision(0);
	fibnumber(n);

	system("pause");
	return 0;
}