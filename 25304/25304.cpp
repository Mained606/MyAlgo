#include <iostream>
int main() {
	int N = 0;
	long X = 0;
	long sum = 0;

	std::cin >> X;
	std::cin >> N;
	for (int i = 0; i < N; i++)
	{
		int a, b;
		std::cin >> a >> b;
		sum += a * b;
	}
	if (X == sum) {
		std::cout << "Yes" << "\n";
	}
	else {
		std::cout << "No" << "\n";
	}
	return 0;
}