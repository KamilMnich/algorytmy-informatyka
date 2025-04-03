#include <iostream>
using namespace std;

float f(int x) {
	return x*(x*(x-3)+2)-6;
}

int main() {
	float a = -10;
	float b = 15;
	float epsilon = 0.00001;
	
	if(f(a) == 0.0) {
		return a;
	}
	
	if(f(b) == 0.0) {
		return b;
	}
	
	while(b-a > epsilon) {
		float srodek = (a+b)/2;
		
		if(f(srodek) == 0) {
			cout << "Znalezione miejsce zerowe wynosi: " << srodek;
			return 0;
		}
		
		if(f(a)*f(srodek)<0){
			b = srodek;
		}else{
			a = srodek;
		}
	}
	float win = (a+b)/2;
	
	cout << "Znalezione miejsce zerowe wynosi: " << win;
}  
