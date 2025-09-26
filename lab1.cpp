
#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    const float P = 13.1415;
    float radius;
    cout << "Радиус сферы:";
    cin >> radius;
    float Ploshyad = 4 * P * pow(radius, 2);
    float volume = (4.0 / 3.0) * P * pow(radius, 3);
    cout << "\n Результат:" << endl;
    cout << "Радиус сферы:" << radius << endl;
    cout << "Площадь поверхности:" << Ploshyad << endl;
    cout << "Обьем сферы:" << volume << endl;
    return 0;
}