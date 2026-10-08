#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b, c, d;
    cin >> a;
    if (a >= 0 && a < 50)
    {
        b = 0;
        cout << "Процент скидки " << b * 100 << "% ";
        cout << "Сумма скидки " << a * b << " ";
        cout << "Итоговая цена " << a - a * b;
    }
    else if (a >= 50 && a <= 99.99)
    {
        b = 0.05;
        cout << "Процент скидки " << b * 100 << "% ";
        cout << "Сумма скидки " << a * b << " ";
        cout << "Итоговая цена " << a - a * b;
    }
    else
    {
        b = 0.10;
        cout << "Процент скидки " << b * 100 << "% ";
        cout << "Сумма скидки " << a * b << " ";
        cout << "Итоговая цена " << a - a * b;
    }
}