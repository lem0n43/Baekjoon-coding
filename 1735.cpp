#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	return a % b ? gcd(b, a % b) : b;
}

int main(void)
{
	int a1, a2;
	cin >> a1 >> a2;
	int b1, b2;
	cin >> b1 >> b2;

	int c1, c2;
	c2 = a2 * b2;
	c1 = a1 * b2 + a2 * b1;

	int div = gcd(c1, c2);

	c1 = c1 / div;
	c2 = c2 / div;

	cout << c1 << " " << c2 << "\n";
	return 0;
}