/* 24) Äëÿ ñòðóêòóðû Date íàïèøèòå îïåðàòîð ïëþñ, ïðèíèìàþùèé öåëîå ÷èñëî äíåé è
âîçâðàùàþùèé äàòó, îòñòîÿùóþ íà ýòî êîëè÷åñòâî äíåé.
*/
#include <iostream>
using namespace std;

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

    int den()
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

    Date &operator + (int a)
    {
        Day += a;

        while (Day > den())
        {
            Day -= den();
            Month++;
        };

        while (Month > 12)
        {
            Month -= 12;
            Year++;
        };
        return *this;
    }
};

int main()
{
    Date Now;
    Now.input();

    int n;
    cin >> n;
    Now + n;
    Now.output();
}
