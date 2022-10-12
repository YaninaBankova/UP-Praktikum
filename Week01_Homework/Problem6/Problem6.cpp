#include <iostream>
int main() {
	using namespace std;
	int a, b;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	int sameDigits = 0;
	while (a > 0 && b > 0) {
		if (a % 10 == b % 10) sameDigits++;
		a /= 10;
		b /= 10;
	}
	cout << sameDigits;
}