#include <iostream>
#include <cmath>

using namespace std;

/***************************************
prime (int n)
returns: true if 'n' is a prime number

desc:
prime function uses naive method (optimized with square root from n) to check if 'n' is prime number

****************************************/
bool prime(int n)
{
	if (n <= 1)
		return false;

	double sqrt_n = sqrt(n);

	for (int i = 2; i <= sqrt_n; i++)
		if (n % i == 0) return false;

	return true;
}


int main()
{
	int n;
	int tab[99998];

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> tab[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (prime(tab[i]))
			cout << "TAK" << "\n";
		else
			cout << "NIE" << "\n";
	}

    return 0;
}

