/*6) Íàïèøèòå ïðîãðàììó, âûïèñûâàþùóþ âñå ýëåìåíòû ïîñëåäîâàòåëüíîñòè,
èìåþùèå íå ìåíåå ïÿòè äåëèòåëåé*/
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int *q = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> *(q + i);
	};
	cout << '\n';
	for (int i = 0; i < n; i++)
	{
		int k = 0;
		int g = *(q + i);
		for (int j = 1; j <= g; j++)
		{
			if ((g % j) == 0)
			{
				k++;
			};
		};
		if (k >= 5)
		{
			cout << g << " ";
		};
	};
}
