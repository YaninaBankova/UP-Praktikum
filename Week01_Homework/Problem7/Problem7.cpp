#include <iostream>
int main() {
	using namespace std;
	int n;
	cout << "n = ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j < i) cout << " ";
			else cout << j + 1;
		}
		cout << endl;
	}
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j < n - i - 1) cout << " ";
			else cout << j + 1;
		}
		cout << endl;
	}
}