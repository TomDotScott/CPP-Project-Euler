#pragma once
#include <string>
#include <vector>

// CHALLENGE : Work out the first 10 digits of the sum of the 100, 50 digit numbers
class Problem13 {
public:
	explicit Problem13(std::string& _fileName);
private:
	void OpenFile(std::string& _fileName);
	static void AddVectors(std::vector<char>& _lhs, std::vector<char>& _rhs, std::vector<char>& _result);
	std::vector<std::vector<char>> m_numbers;
};

