#include <iostream>
#include <cmath>
using namespace std;

double f(double x) {
    return x * (x * (x - 3) + 2) - 6;
}

double bisekcja(double a, double b, double epsilon) {
    if (f(a) == 0.0)
        return a;
    if (f(b) == 0.0)
        return b;

    double srodek;
    while ((b - a) > epsilon) {
        srodek = (a + b) / 2;
        if (f(srodek) == 0.0)
            return srodek;
        if (f(a) * f(srodek) < 0)
            b = srodek;
        else
            a = srodek;
    }
    return (a + b) / 2;
}

int main() {
    double a = -10;
    double b = 10;
    double epsilon = 0.00001;

    double miejsce_zerowe = bisekcja(a, b, epsilon);
    cout << "Znalezione miejsce zerowe wynosi: " << fixed;
    cout.precision(5);
    cout << miejsce_zerowe << endl;

    return 0;
}
