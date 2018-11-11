/*7) Напишите программу, выписывающую все элементы последовательности,
имеющие ровно семь делителей*/
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int *q = new int[n];

	for (int i = 0; i < n; i++)
	{
		int k = 0;
		cin >> *(q + i);

		int g = *(q + i);
		for (int j = 1; j <= g);  j++)
		{
			if ((g % j) == 0)
			{
				k++;
			};
		};
		if (k == 7)
		{
			cout << g << " ";
		};
	};
}
