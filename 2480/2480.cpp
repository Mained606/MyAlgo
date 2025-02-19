#include <iostream>

int main()
{
	int num1, num2, num3;
	std::cin >> num1 >> num2 >> num3;

	if (num1 == num2 && num2 == num3)
	{
		std::cout << 10000 + num1 * 1000 << "\n";
	}
	else if (num1 == num2 || num2 == num3)
	{
		std::cout << 1000 + num2 * 100 << "\n";
	}
	else if (num1 == num3)
	{
		std::cout << 1000 + num1 * 100 << "\n";
	}
	else
	{
		if (num1 > num2 && num1 > num3)
		{
			std::cout << num1 * 100 << "\n";
		}
		else if (num2 > num1 && num2 > num3)
		{
			std::cout << num2 * 100 << "\n";
		}
		else
		{
			std::cout << num3 * 100 << "\n";
		}
	}

	return 0;
}
