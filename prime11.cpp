/*11) Íàïèøèòå ïðîöåäóðó, óäàëÿþùóþ èç äèíàìè÷åñêè âûäåëåííîãî ìàññèâà
ìàêñèìàëüíûé è ìèíèìàëüíûé ýëåìåíòû (åñëè òàêîâûõ íåñêîëüêî – óäàëèòü
íóæíî âñå). Ïî îêîí÷àíèè ðàáîòû ïðîöåäóðû êîëè÷åñòâî âûäåëåííîé ïàìÿòè
äîëæíî óìåíüøèòüñÿ*/
#include <iostream>
using namespace std;

int Maximum (int* a, int b)
{
    int k = *a;
    for (int i = 0; i < b; i++)
    {
        if ((*(a + i)) > k)
        {
            k = *(a+i);
        };
    };
    return k;
}

int minimum (int* a, int b)
{
    int k = *a;
    for (int i = 0; i < b; i++)
    {
        if ((*(a + i)) < k)
        {
            k = *(a+i);
        };
    };
    return k;
}

int matan (int* a, int b)
{
    int m = 0;
    for (int i = 0; i < b; i++)
    {
        if (((*(a + i)) == (Maximum(a,b))) || ((*(a+i)) == (minimum(a,b))))
        {
            m++;
        };
    };
    return m;
}

void oioi(int* &a, int b)
{
    int r = matan(a, b);
    int* gg = new int [b - r];
    int k = 0;

    for (int i = 0; i < b; i++)
    {
        if (((*(a + i)) != Maximum(a,b)) && ((*(a + i)) != minimum(a,b)))
        {
            *(gg + k) = *(a + i);
            k++;
        };
    };

    a = gg;
}

int main()
{
    int n;
    cin >> n;
    int* velfr = new int [n];
    for (int i = 0; i < n; i++)
    {
        cin >> *(velfr + i);
    };

    int f = matan(velfr, n);
    cgfcbnt(velfr, n);
    cout << '\n';

    for (int i = 0; i < (n - f); i++)
    {
        cout << *(velfr+i) << " ";
    };

    delete[]velfr;
}
