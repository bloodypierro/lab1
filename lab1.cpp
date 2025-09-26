
    #include <iostream>
    #include <cmath>
    using namespace std;


    int main()
    {
        setlocale(LC_ALL, "Russian");
        const double P = 13.1415;
        double radius;
        cout << "Радиус сферы:";
        cin >> radius;
        double Ploshyad = 4 * P * pow(radius, 2);
        double volume = (4.0 / 3.0) * P * pow(radius, 3);
        cout << "\n Результат:" << endl;
        cout << "Радиус сферы:" << radius << endl;
        cout << "Площадь поверхности:" << Ploshyad << endl;
        cout << "Обьем сферы:" << volume << endl;
        return 0;
    }