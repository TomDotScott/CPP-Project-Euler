#pragma once
#include <unordered_map>

// CHALLENGE - he following iterative sequence is defined for the set of positive integers:
// n → n / 2 (n is even)
// n → 3n + 1 (n is odd)
//
// Using the rule above and starting with 13, we generate the following sequence :
//
// 13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
// It can be seen that this sequence(starting at 13 and finishing at 1) contains 10 terms.
// Although it has not been proved yet(Collatz Conjecture), it is thought that all starting numbers finish at 1.
// CHALLENGE - Which starting number, under one million, produces the longest chain?
class Problem14 {
public:
	explicit Problem14(int _limit);
private:
	//Takes in a number and returns the amount of steps it takes to get to 1
	int Collatz(long _num, std::vector<long>& _powersOfTwoCache);
	static int BinarySearch(std::vector<long>& _iterable, int _startPoint, int _endPoint, long& _valueToFind);
};

