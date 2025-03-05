#include <iostream>

int main() {
	int n = 0;
	int result = 0;

	std::cin >> n;

	for (int i = 1; i <= n; i++) {
		result += i;
	}
	std::cout << result << "\n";
	return 0;
}