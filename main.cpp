/*20) Напишите процедуру, удаляющую из динамически выделенной строки лишние
пробелы. Не лишними считаются одиночные пробелы, разделяющие пару слов. По
окончании работы процедуры количество выделенной памяти должно
увеличиться.*/
#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int listik (char* a, int b)
{
    int p = 0;

    for (int i = 0; i < b; i++)
    {
        if (*(a + i) == ' ')
        {
            if (i == 0)
            {
                p++;
            }
            else
            {
                if (i == (b - 1))
                {
                    p++;
                }
                else
                {
                    if (*(a + i + 1) == ' ')
                    {
                        p++;
                    };
                };
            };
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
 void uhodi (char* &a, int b)
{
    int r = listik(a, b);
    int k = (b - r);
    char* plagiat = new char [k];
    int i = 0, j = 0;;
    while (j < b)
    {
        if (i == k) break;
        if ((*(a + j)) != ' ')
        {
            *(plagiat + i) = *(a + j);
            i++;
        }
        else
        {
            if (j != 0)
            {
                if (*(a + j - 1) != ' ')
                {
                    *(plagiat + i) = *(a + j);
                    i++;
                };
            };
        };
        j++;
    };
    a = plagiat;
}
int main()
{
    int n;
    char* tevirp = new char [256];
    gets(tevirp);
    n = Length(tevirp);
    int y = listik(tevirp, n);
    uhodi(tevirp, n);
    int i = 0;
    while (i < (n - y))
    {
        if (*(tevirp + i) != ' ') {cout << *(tevirp + i);};
        if (*(tevirp + i) == ' ') {cout << " ";};
        i++;
    };
}
