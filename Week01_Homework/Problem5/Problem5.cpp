#include <iostream>
int main(){
	using namespace std;
	int n, count = 1, j = 0;
	cout << "n = ";
	cin >> n;
	while (count <= n) {
		j++;
		for (int i = 0; i < j && count <= n; i++) {
			cout << count << " ";
			count++;
		}
		cout << endl;
	}
}