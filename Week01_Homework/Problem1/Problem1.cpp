#include <iostream>
int main() {
	int k, n;
	std::cout << "n = ";
	std::cin >> n;
	std::cout << "k = ";
	std::cin >> k;
	int log = 0, res = 1;
	while (res < n) {
		res *= k;
		log++;
	}
	if (res != n) log--;
	std::cout << "log k(n) = " << log;
}