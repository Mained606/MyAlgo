#include <iostream>
#include <string>

int main()
{
	int num1, num2;
	std::cin >> num1 >> num2;
	std::string strNum = std::to_string(num2);

	for (int i = 2; i >= 0; i--)
	{
		int digit = strNum[i] - '0';
		std::cout << num1 * digit << "\n";
	}

	std::cout << num1 * num2 << "\n";

	return 0;
}