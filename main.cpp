//1) Напишите программу, вычисляющую сумму нечетных цифр целого числа.


#include <iostream>

using namespace std;

int main(){
    int h, k, z;
    z = 0;
    cin >> h;
    k = (h % 10);
    while (h >= 1){
        if ((k % 2) == 1){
            z += k;
        };
        h /= 10;
        k = (h % 10);
    };
    cout << z;
    return 0;
}
