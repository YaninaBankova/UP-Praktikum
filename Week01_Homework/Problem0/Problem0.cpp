#include <iostream>

int main(){
	using namespace std;
	int n;
	cout << "n = ";
	cin >> n;
	int count = 0, max = 0;
	while (n > 0) {
		if (n % 2 == 1) count++;
		else {
			if (count > max) max = count;
			count = 0;
		}
		n /= 2;
	}
	cout << ((max > count) ? max : count);
}