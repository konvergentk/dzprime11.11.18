/*13) Напишите процедуру, проводящую сжатие символьного динамически выделенного
массива. Несколько подряд идущих одинаковых букв должны заменяться на их
количество и саму букву. Например, строка “aaabcccccdd” должна перейти в
“3a1b5c2d”. Можно считать, что не бывает более девяти одинаковых букв, идущих
подряд.
*/
#include <iostream>
using namespace std;

int pain (char* a, int b)
{
    int k = 1;
    for (int i = 0; i < (b-1); i++)
    {
        if ((*(a+i)) != (*(a+i+1)))
        {
            k++;
        };
    };
    return k;
}
int alexey(char* a)
{
    int b = 0;
    while(*a++)
    {
        b++;
    };
    return b;
}
void zip (char* &a, int b)
{
    int r = pain(a, b);
    r += r;
    int z = 0;
    char* tigr = new char [r];
    int i = 0;
    while (i < b)
    {
        int v = 0;
        int j = i;
        while ((*(a+i)) == (*(a+j)))
        {
            v++;
            j++;
        };
        *(tigr + z + 1) = *(a+i);
        *(tigr + z) = v + '0';
        i = j;
        z += 2;
    };
    a = tigr;
}
int main()
{
   int n;

   char* sergeevich = new char [256];
   cin.getline(sergeevich, 256, '\n');
   n = alexey(sergeevich);

   int f = pain(sergeevich,n);
   f += f;
   zip(sergeevich, n);
   for (int i = 0; i < f; i++)
   {
       cout << *(sergeevich + i);
   };
}
