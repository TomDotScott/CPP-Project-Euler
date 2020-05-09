#pragma once
#include <iostream>
#include <string>
#include <vector>

// CONTEXT : The four adjacent digits in the 1000-digit number that have the greatest product are 9 × 9 × 8 × 9 = 5832
//
// CHALLENGE : Find the thirteen adjacent digits in the 1000-digit number that have the greatest product.
//                       What is the value of this product?
class Problem8 {
public:
	explicit Problem8(std::string& _fileName, int _digitCount) { std::cout << Solve(_fileName, _digitCount) << std::endl; };
private:
	static unsigned long long Solve(std::string& _fileName, int _digitCount);
	static void OpenFile(std::string& _fileName, std::vector<int>& _vector);
};

