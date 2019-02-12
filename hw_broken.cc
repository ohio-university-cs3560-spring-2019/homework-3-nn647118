#include <iostream>
#include <vector>
#include <cmath>



/// deviation - calculates the standard devition of a given array
///
/// @param a - the integer array
/// @param n - the size of the integer array
/// @return double standard deviation
double deviation(int* a, int n)
{
	int sum = 0;
	std::vector<int> v;
	v.assign(a, a + n);
	for (size_t i = 0; i < v.size(); i++)
	{
		sum += v[i];
	}
	double mean = double(sum) / double(v.size());
	double stddev = 0;
	for (size_t i = 0; i <= v.size() - 1; i++)
	{
		stddev = stddev + (v[i] - mean) * (v[i] - mean);
	}
	stddev /= v.size();
	if (stddev == 0)
		std::cout << "Sigma is zero." << std::endl;

	return sqrt(stddev);
}