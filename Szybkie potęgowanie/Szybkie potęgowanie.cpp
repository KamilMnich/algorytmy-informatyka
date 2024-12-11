#include <iostream>
using namespace std;

int SzybkiePotRekurencyjne(int a, int b) {
	if(b==0){
		return 1;
	}else if(b%2==1){
		return a*SzybkiePotRekurencyjne(a, b-1);
	}
	
	int win = SzybkiePotRekurencyjne(a, b/2);
	return win;
}

int main() {
	int a = 1;
	int n = 1;
	cout << "Podaj baze (a): ";
	cin >> a;
	cout << "Podaj wykladnik (n): ";
	cin >> n;
	int wynik = SzybkiePotRekurencyjne(a, n);
	
	
	cout << a << "^" << n << " = " << wynik;
	

return 0;
}
