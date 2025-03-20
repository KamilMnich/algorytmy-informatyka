#include <iostream>
using namespace std;

int CalculatePowerRecursive(int a, int b) {
	if(b==0){
		return 1;
	}else if(b%2==1){
		return a*CalculatePowerRecursive(a, b-1);
	}
	
	int win = CalculatePowerRecursive(a, b/2);
	return win*win;
}

int DisplayResult(int a, int b, int c) {
	cout << a << "^" << b << " = " << c;
}

int main() {
	int a = 1;
	int n = 1;
	cout << "liczbe podstawowa: ";
	cin >> a;
	cout << "Podaj wykladnik: ";
	cin >> n;
	int wynik = CalculatePowerRecursive(a, n);
	int display = DisplayResult(a, n, wynik);

return 0;
}
