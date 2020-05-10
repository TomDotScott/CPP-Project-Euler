#include "Problem8.h"
#include <fstream>
#include <vector>

unsigned long long Problem8::Solve(std::string& _fileName, unsigned long long _digitCount)
{
	//do the maths
	std::vector<int> digits;
	OpenFile(_fileName, digits);
	unsigned long long highestProduct{0};
	for(unsigned long long i = 0; i < digits.size() - _digitCount; ++i)
	{
		unsigned long long product{ 1 };
		for(unsigned long long j = i; j < i + _digitCount; ++j)
		{
			product *= digits[j];
		}
		if(product > highestProduct)
		{
			highestProduct = product;
			std::cout << "THE CURRENT HIGHEST PRODUCT IS : " << highestProduct << std::endl;
		}
	}
	return highestProduct;
}

void Problem8::OpenFile(std::string& _fileName, std::vector<int>& _vector)
{
	//read each digit of the file into a vector of integers
	_vector.reserve(1000);
	std::ifstream file;
	file.open(_fileName);
	if (!file) {
		std::cout << "THE FILE COULD NOT BE OPENED" << std::endl;
		return;
	} else {
		while (!file.eof()) {
			std::string data;
			file >> data;
			for (auto character : data) {
				_vector.push_back(character - 48);
			}
		}
	}
}