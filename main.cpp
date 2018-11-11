/*2) Напишите программу, вычисляющую произведение цифр целого числа, чётность
которых совпадает с чётностью последней цифры.*/

#include <iostream>
using namespace std;

bool ch(int a)
{
	return ((a % 2) == 0);
}
int main()
{
	int n, k, f, z;
	z = 1;
	cin >> n;
	k = (n % 10);
	f = k;
	while (n >= 1)
	{
		if (ch(f) == ch(k))
		{
			z *= f;
		};
		n /= 10;
		f = (n % 10);
	};
	cout << z;
	return 0;
}
