#include <iostream>

int main() {
	using namespace std;
	int a, b;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	int sum, product, count = 0, digit, n;
	for (a; a <= b; a++) {
		sum = 0, product = 1;
		n = a;
		while (n != 0) {
			digit = n % 10;
			sum += digit;
			product *= digit;
			n /= 10;
		}
		if (sum == product) count++;
	}
	cout << count;
	
}
