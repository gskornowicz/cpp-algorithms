#include <iostream>

using namespace std;

unsigned long int FibRecur(int n)
{
	if (n <= 1) return n;
	else return FibRecur(n-1) + FibRecur(n-2);
}

int main()
{
	int n;
	cin >> n;
	cout << FibRecur(n) << endl;
	system("pause");
    return 0;
}

