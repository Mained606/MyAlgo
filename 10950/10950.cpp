#include<iostream>

int main() {
	int count;
	int A, B;
	
	std::cin >> count;
	
	for (int i = 0; i < count; i++) {
		std::cin >> A >> B;
		std::cout << A + B << "\n";
	}
	return 0;
}