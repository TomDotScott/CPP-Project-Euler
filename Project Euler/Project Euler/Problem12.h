#pragma once
#include <iostream>
#include <unordered_map>
// CONTEXT : The sequence of triangle numbers is generated by adding the natural numbers.
// So the 7th triangle number would be 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28. The first ten terms would be:
// 1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...
// Let us list the factors of the first 7 triangle numbers
//  1: 1
//  3: 1,3
//  6: 1,2,3,6
//  10: 1,2,5,10
//  15: 1,3,5,15
//  21: 1,3,7,21
//  28: 1,2,4,7,14,28
//  We can see that 28 is the first triangle number to have over five divisors.
//  CHALLENGE : What is the value of the first triangle number to have over five hundred divisors?
class Problem12 {
public:
	explicit Problem12(int _divisorAmount) { std::cout << Solve(_divisorAmount) << std::endl; };
private:
	static int GetTriangleNumber(int _num);
	int FindDivisorCount(int _num) const;
	int Solve(int _divisorAmount);
	//Stored AMOUNT OF DIVISORS : NUMBER
	std::unordered_map<int, int> m_divisorPairs{ std::pair<int, int>{1, 1} };
};

