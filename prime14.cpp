/*14) Íàïèøèòå ïðîöåäóðó, ïðîâîäÿùóþ “ðàçæàòèå” ñèìâîëüíîãî äèíàìè÷åñêè
âûäåëåííîãî ìàññèâà, ñäåëàííîå â ïðîøëîé çàäà÷å. Íàïðèìåð ñòðîêà “3a1b5c2d “
äîëæíà ïåðåéòè â “aaabcccccdd”. Ìîæíî ñ÷èòàòü, ÷òî íå áûâàåò áîëåå äåâÿòè
îäèíàêîâûõ áóêâ, èäóùèõ ïîäðÿä.
*/
#include <iostream>
using namespace std;

int svetlaypamyat(char* a, int b)
{
    int p = 0, k;
    for (int i = 0; i < b; i++)
    {
        if ((i % 2) == 0)
        {
            k = (*(a + i) - '0');
            p += k;
        };
    };
    return p;
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
void antizip (char* &a, int b)
{
    int r = svetlaypamyat(a, b);
    char* plagiatda = new char [r];
    int q, z = 0;;

    for (int i = 0; i < b; i += 2)
    {
        q = (*(a + i) - '0');
        while (q != 0)
        {
            *(plagiatda + z) = *(a + i + 1);
            q--, z++;
        };
    };
    a = plagiatda;
}
int main()
{
   int n;
   char* shifr = new char [256];
   cin.getline(shifr, 256, '\n');
   n = Length(shifr);
   int w = svetlaypamyat(shifr, n);
   antizip(shifr, n);
   for (int i = 0; i < w; i++)
   {
       cout << *(shifr + i);
   };
}

