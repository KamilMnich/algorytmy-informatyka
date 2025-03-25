#include <iostream>

using namespace std;

int horner(int wsp[], int st, int x) {
    if (st == 0)
        return wsp[0];
    return x * horner(wsp, st - 1, x) + wsp[st]; // K3
}

int main() {
    int stopien, x;

    cout << "Podaj stopien wielomianu: ";
    cin >> stopien;

    int* wspolczynnik = new int[stopien + 1];

    cout << "Podaj " << stopien + 1 << " wspolczynnikow wielomianu od najwyzszej potegi do wolnego wyrazu:\n";
    for (int i = 0; i <= stopien; i++) {
        cin >> wspolczynnik[i];
    }

    cout << "Podaj argument x: ";
    cin >> x;

    int wynik = horner(wspolczynnik, stopien, x);
    cout << "Wartosc wielomianu wynosi: " << wynik << endl;

    delete[] wspolczynnik;

    return 0;
}
