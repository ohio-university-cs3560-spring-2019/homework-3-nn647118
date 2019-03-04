#include "hw6.h"
#include <vector>
#include <iostream>
#include <cmath>

double stddev(int n, ...)
{
	int sum = 0;
	std::vector<int> vec;
	va_list args;
	va_start(args, n);
	for (int i = 0; i < n; ++i)
	{
		int number = va_arg(args, int);
		vec.push_back(number);
		sum += number;
	}
	va_end(args);

	double mean = double(sum) / double(n);
	double stddev = 0;
	for (size_t i = 0; i < n; i++)
	{
		stddev = stddev + (vec[i] - mean) * (vec[i] - mean);
	}

	stddev /= n;
	if (stddev == 0)
		std::cout << "Sigma is zero." << std::endl;

	return sqrt(stddev);
}