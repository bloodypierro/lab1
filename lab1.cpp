
#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    const double P = 3.14;
    double radius;
    cout << "Radius sferi:";
    cin >> radius;
    double Ploshyad = 4 * P * pow(radius, 2);
    double volume = (4.0 / 3.0) * P * pow(radius, 3);
    cout << "\n Result:" << endl;
    cout << "Radius sferi:" << radius << endl;
    cout << "Ploshyad poverhnosti:" << Ploshyad << endl;
    cout << "Obiem sferi:" << volume << endl;
    return 0;
}