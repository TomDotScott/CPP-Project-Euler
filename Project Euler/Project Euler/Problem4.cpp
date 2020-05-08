#include "Problem4.h"
#include <string>
#include <vector>

bool Problem4::BruteForceIsPalindrome(const int _number) const {
	std::string numberString = std::to_string(_number);
	std::vector<char> numberVector;
	for (char c : numberString) {
		numberVector.push_back(c);
	}
	std::vector<char> vectorB = numberVector;
	std::reverse(vectorB.begin(), vectorB.end());
	return std::equal(numberVector.begin(), numberVector.end(), vectorB.begin());
}

int Problem4::FindLargestPalindromeBruteForce() const {
	int highestPalindrome{ 0 };
	for (int i = 999; i > 900; --i) {
		for (int j = 999; j > 900; --j) {
			const int product{ i * j };
			//check if the number is palindromic
			if (BruteForceIsPalindrome(product)) {
				//check if it is the highest
				if(product > highestPalindrome)
				{
					highestPalindrome = product;
				}
			}
		}
	}
	return highestPalindrome;
}
