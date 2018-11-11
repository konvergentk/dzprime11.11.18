/*21) ��� ��������� Date �������� �����, ������������ ������������ ��� ������ ��
����*/
#include <iostream>
using namespace std;

int maxdel (int a, int b)
{
    int m = 0;
    for (int i = a; i > 1; i--)
    {
        if ((i % b) == 0)
        {
            m = i;
            break;
        };
    };
    return m;
}
struct Date
{
    int Day;
    int Month;
    int Year;
    Date ()
    {
        Day = 0;
        Month = 0;
        Year = 0;
    }
    void input()
    {
        cin >> Day >> Month >> Year;
    }
    void output()
    {
        if ((Day / 10) == 0) {cout << 0;};
        cout << Day << ".";
        if ((Month / 10) == 0) {cout << 0;};
        cout << Month << "." << Year;
    }
    bool visokos()
    {
        if ((Year % 400) == 0) {return true;}
        else
            {
                if ((Year % 100) == 0) {return false;}
                else
                {
                    if ((Year % 4) == 0) {return true;}
                    else {return false;};
                };
            };
    }
    int dni()
    {
        if (Month == 2)
        {
            if (visokos()) {return 29;}
            else {return 28;};
        }
        else
        {
            if (((Month <= 7) && (((Month % 2) != 0))) || ((Month >= 8) && ((Month % 2) == 0)))
            {
                return 31;
            }
            else {return 30;};
        };
    }
    int cod_mes ()
    {
        if ((Month == 1) || (Month == 10)) {return 0;};
        if (Month == 5) {return 1;};
        if (Month == 8) {return 2;};
        if ((Month == 2) || (Month == 3) || (Month == 11)) {return 3;};
        if (Month == 6) {return 4;};
        if ((Month == 9) || (Month == 12)) {return 5;};
        if ((Month == 4) || (Month == 7)) {return 6;};
    }
    int cod_year ()
    {
        int n = (Year / 100);
        n -= maxdel(n, 4);
        n *= 5;
        n -= maxdel(n, 7);
        return n;
    }
    int dened ()
    {
        int m = Day + cod_mes();
        m -= maxdel(m, 7);
        int p = (Year % 100);
        p -= maxdel(p, 28);
        p += ((Year % 100)/4);
        p += cod_year();
        if (((Month == 1) || (Month == 2)) && (visokos() == 1)) {p--;};
        m += p;
        m -= maxdel(m, 7);
        return m;
    }
};
int main()
{
    Date D;
    D.input();
    if (D.dened() == 1) {cout << "Sunday";};
    if (D.dened() == 2) {cout << "Monday";};
    if (D.dened() == 3) {cout << "Tuesday";};
    if (D.dened() == 4) {cout << "Wednesday";};
    if (D.dened() == 5) {cout << "Thursday";};
    if (D.dened() == 6) {cout << "Friday";};
    if ((D.dened() == 0) || (D.dened() == 7)) {cout << "Saturday";};
}
