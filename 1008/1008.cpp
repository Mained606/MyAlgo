#include <iostream>
#include <iomanip>

int main()
{
	int a, b;

	std::cin >> a >> b;

	double result = static_cast<double> (a) / b;

	std::cout << std::fixed << std::setprecision(10) << result << "\n";
	
	return 0;
}