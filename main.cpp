/*17) Ќапишите процедуру, заполн€ющую квадратный двумерный массив
последовательными числами змейкой против часовой стрелки, начина€ с верхнего
правого угла.
ѕример дл€ массива размера 5х5:
5 4  3  2  1
6 19 18 17 16
7 20 25 24 25
8 21 22 23 14
9 10 11 12 13


*/
#include <stdio.h>
using namespace std;

void ss (int** &a, int b)
{
	b--;

	int c = b, d = 0, k = 1;
	while (c >= d)
	{
		int x = c, y = d;

		while (x > d)
		{
			a[y][x] = k;
			k++, x--;
		};

		while (y < c)
		{
			a[y][x] = k;
			k++, y++;
		};

		while (x < c)
		{
			a[y][x] = k;
			k++, x++;
		};

		while (y > d)
		{
			a[y][x] = k;
			k++, y--;
		};

		d++, c--;
	};

	if ((b % 2) == 0)
	{
		a[(b/2)][(b/2)] = ((b+1)*(b+1));
	};
}

int main()
{
	int n;
	scanf("%d", &n);
	int** uh = new int* [n];
	for (int a = 0; a < n; a++)
	{
		*(uh+a) = new int [n];
	};

	int w = 3;
	if ((n*n) >= 10)
    {
        w += 2;
    };

    printf("\n");
	ss(uh, n);
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
		    if (j == 0) {printf("%1d", uh[i][j]);}
		    else {printf("%*d", w, uh[i][j]);};
		};
		printf("\n");
	};
}
