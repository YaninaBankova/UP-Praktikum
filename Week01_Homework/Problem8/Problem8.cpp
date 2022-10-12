#include <iostream>
int main() {
	using namespace std;
	int n;
	cout << "n = ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2 * n; j++) {
			
			if (j == n - i - 1) cout << "/";
			else if (j == n + i) cout << "\\";
			else cout << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < 2 * n; i++) cout << "-";

	cout << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2 * n; j++) {
			if (j == 0 || j == 2 * n - 1) cout << "|";
			else cout << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < 2 * n; i++) cout << "=";
}
