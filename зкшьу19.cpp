/*18) Íàïèøèòå ëîãè÷åñêóþ ôóíêöèþ, ïðîâåðÿþùóþ, ÿâëÿåòñÿ ñòðîêà ïàëèíäðîìîì.
Ìîæíî ñ÷èòàòü, ÷òî ñòðîêà ñîñòîèò òîëüêî èç áóêâ ëàòèíèöû.*/
#include <iostream>
using namespace std;

bool pil (char* A, int b)
{
    b--;
    int k = 0;
    for (int i = 0; i <= ((b - 1)/2); i++)
    {
        if (A[i] != A[b - i])
        {
            k++;
        };
    };
    return (k == 0);;
}

int Length(char* a)
{
    int b = 0;
    while(*a++)
    {
        b++;
    };
    return b;
}

int main()
{
    int n;

    char* rat = new char [256];
    cin.getline(rat, 256, '\n');
    n = Length(rat);

    cout << '\n';

    if (pil(rat, n) == 1)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    };
}
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
