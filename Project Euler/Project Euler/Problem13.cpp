#include "Problem13.h"
#include <fstream>
#include <iostream>
#include <iterator>
#include <sstream>

Problem13::Problem13(std::string& _fileName) {
	OpenFile(_fileName);
	std::vector<std::vector<char>> currentTotals;
	unsigned int currentIndex{ 0 };
	while (!m_numbers.empty()) {
		if (currentIndex == m_numbers.size() - 1) {
			m_numbers = currentTotals;
			currentTotals.clear();
			currentIndex = 0;
		}
		if (m_numbers.size() == 1) { break; }
		std::vector<char> sum;
		AddVectors(m_numbers[currentIndex], m_numbers[currentIndex + 1], sum);
		currentTotals.push_back(sum);
		//std::cout << currentIndex << std::endl;
		++currentIndex;
	}

	std::cout << "THE 10 DIGITS ARE...." << std::endl;
	for(int i = 0; i < 10; ++i)
	{
		std::cout << m_numbers[0][i];
	}
}

void Problem13::OpenFile(std::string& _fileName) {
	std::ifstream file;
	file.open(_fileName);
	if (!file) {
		std::cout << "FILE NOT FOUND" << std::endl;
		return;
	}
	std::string line;
	while (std::getline(file, line)) {
		std::vector<char> v;
		std::stringstream s(line);
		while (std::getline(s, line)) {
			for (auto& character : line) {
				v.push_back(character);
			}
		}
		std::reverse(v.begin(), v.end());
		m_numbers.push_back(v);
	}
}

void Problem13::AddVectors(std::vector<char>& _lhs, std::vector<char>& _rhs, std::vector<char>& _result) {
	//will store the carry digit
	int carry{ 0 };
	for (unsigned int i = 0; i < _lhs.size(); ++i) {
		int result = (carry > 0 ? carry + _lhs[i] : _lhs[i]) + _rhs[i] - 96;
		carry = 0;
		if (result >= 10) {
			carry = result / 10;
			result %= 10;
		}
		_result.push_back(result + 48);
		if (i == _lhs.size() - 1) {
			_result.push_back(carry + 48);
		}
	}
}
