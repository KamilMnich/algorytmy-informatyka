#include <iostream>
using namespace std;

int main() {
	int a = 1;
	int n = 1;
	int wynik = 1;
	cout << "Podaj baze (a): ";
	cin >> a;
	cout << "Podaj wykladnik (n): ";
	cin >> n;
	
	while(n>0){
		if(n%2==1){
			wynik=wynik*a;
			a=a*a;
			n=n/2;
		}
		
	}
	cout << a << "^" << n << "= " << wynik;
	

return 0;
}