/*9) Напишите программу, находящую корень функции f, если известно, что f –
монотонна. Функцию f считаем не известной (т.е. она просто возвращает значение
по аргументу). Для отладки разумно использовать кубическую функцию*/
#include <iostream>
using namespace std;
bool sign(double a)
{
	return (a >= 0);
}
double f(double a)
{
	return (a * a * a - 5 * a + 2);
}
int main()
{
	double t, x = 0, o = 100, l = (x - o), r = (x + o);
	cin >> t;
	while (sign(f(l)) == sign(f(r)))
	{
		l -= o;
		r += o;
	};
	double d = (r - l);
	while ((f(x) != 0) && (sign(f(x - t)) == sign(f(x + t))))
	{
		d /= 2;
		if (sign(f(l)) != sign(f(x)))
		{
			r -= d;
			x -= (d / 2);
		}
		else
		{
			l += d;
			x += (d / 2);
		};
	};
	cout << x;
}
