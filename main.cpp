/*16) Напишите процедуру, заполняющую квадратный двумерный массив пирамидой.
Пример для массива размера 5х5:
1 1 1 1 1
1 2 2 2 1
1 2 3 2 1
1 2 2 2 1
1 1 1 1 1

*/
#include <stdio.h>
using namespace std;
void spasite(int **&a, int b)
{
	b--;
	int c = b, d = 0, k = 1;
	while (c >= d)
	{
		int x = d, y = d;
		while (x < c)
		{
			a[y][x] = k;
			x++;
		};
		while (y < c)
		{
			a[y][x] = k;
			y++;
		};
		while (x > d)
		{
			a[y][x] = k;
			x--;
		};
		while (y > d)
		{
			a[y][x] = k;
			y--;
		};
		d++, c--, k++;
	};
	if ((b % 2) == 0)
	{
		a[(b / 2)][(b / 2)] = ((b / 2) + 1);
	};
}
int main()
{
	int n;
	scanf("%d", &n);
	int **easy = new int *[n];
	for (int win = 0; win < n; win++)
	{
		*(easy + win) = new int[n];
	};
	int w = 2;
	if ((n/2) >= 10) {w++;};
	spasite(easy, n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
		    if (j == 0) {printf("%d", easy[i][j]);}
			else {printf("%*d", w, easy[i][j]);};
		};
		printf("\n");
	};
}
