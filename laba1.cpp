#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double C;
    cout << "Введите температуру ";
    cin >> C;
    double F = C * 9 / 5 + 32;
    cout << F;
}