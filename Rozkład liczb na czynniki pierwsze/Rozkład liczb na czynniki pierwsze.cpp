#include <iostream>
using namespace std;


int main() {
	
	int liczba = 0;
	int k = 2;
	
	cout << "Podaj liczbe: ";
	cin >> liczba;
	
	cout << "Czynniki pierwsze liczby " << liczba <<": ";
	while (liczba > 1) {
		while (liczba%k==0) {
			cout << k << " ";
			liczba=liczba/k;
		}
		k++;
	}

return 0;
}
