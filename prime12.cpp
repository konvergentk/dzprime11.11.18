/*12) Íàïèøèòå ïðîöåäóðó, äîïèñûâàþùóþ ê êàæäîìó ýëåìåíòó äèíàìè÷åñêè
âûäåëåííîãî ìàññèâà ñïðàâà åãî êâàäðàò.({1,2,3,4}->{1,1,2,4,3,9,4,16}). Ïî
îêîí÷àíèè ðàáîòû ïðîöåäóðû êîëè÷åñòâî âûäåëåííîé ïàìÿòè äîëæíî
óâåëè÷èòüñÿ.
*/
#include <iostream>
using namespace std;

int sqr (int o)
{
    return o*o;
}
void vyacheslav (int* &a, int b)
{
    int* zachto = new int [b];
    for (int i = 0; i < b; i++)
    {
        *(zachto + i) = sqr(*(a + i));
    };
    int c = 2*b;
    int* lopata = new int[c];
    for (int i = 0; i < c; i++)
    {
        if ((i % 2) == 0)
        {
            *(lopata + i) = *(a + (i/2));
        }
        else
        {
            *(lopata + i) = *(zachto + ((i-1)/2));
        };
    };
    delete[]zachto;
    a = lopata;
}
int main()
{
    int n;
    cin >> n;
    int* igorevich = new int [n];
    for (int i = 0; i < n; i++)
    {
        cin >> *(igorevich + i);
    };

    vaycheslav(igorevich, n);
    n += n;

    for (int i = 0; i < n; i++)
    {
        cout << *(igorevich + i) << " ";
    };
}
