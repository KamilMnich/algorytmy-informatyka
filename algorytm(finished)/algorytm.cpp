#include <iostream>
using namespace std;

int main() {
	int tab[15] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
	
	int l = 0;
	int p = 15;
	int sr = (l+p)/2;
	int szukana;
	cout << "Podaj liczbe ktora chcesz znalezc: ";
	cin >> szukana;
	
	while(l<=p) {
		if(tab[sr] == szukana) {
			cout << "Liczba " << szukana << " wystepuje w zbiorze w komorce o indeksie: " << sr;
			return 0;
		}else if(tab[sr] > szukana) {
			p = sr - 1;
		}else {
			l = sr + 1;
		}
		sr = (l+p)/2;
	}
	
return 0;
}
