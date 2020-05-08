#pragma once
// CONTEXT : 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
//
// CHALLENGE : What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
class Problem5 {
public:
	explicit Problem5(int _number);
private:
	static int LowestCommonMultiple(int _num1, int _num2);
	static int GreatestCommonDenominator(int _num1, int _num2);
};

