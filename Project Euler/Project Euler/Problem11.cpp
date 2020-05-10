#include "Problem11.h"
#include <fstream>
#include <sstream>


void Problem11::OpenFile(std::string& _fileName) {
	std::ifstream file;
	file.open(_fileName);
	if (!file) {
		std::cout << "FILE NOT FOUND" << std::endl;
		return;
	}
	std::string line, value;
	while (std::getline(file, line)) {
		std::vector<int> v;
		std::stringstream s(line);
		while (std::getline(s, value, ' ')) {
			v.push_back(std::stoi(value));
		}
		m_numArray.push_back(v);
	}
}

int Problem11::GreatestGoingLeftAndRight() {
	int highestProduct{ 0 };
	for (auto& currentRow : m_numArray) {
		for (unsigned int currentColumn = 0; currentColumn < currentRow.size() - 4; ++currentColumn) {
			const int product = currentRow[currentColumn] * currentRow[currentColumn + 1] * currentRow[currentColumn + 2] * currentRow[currentColumn + 3];
			//std::cout << row[i] << " " << row[i + 1] << " " << row[i + 2] << " " << row[i + 3] << " = " << product << std::endl;
			if (product > highestProduct) {
				highestProduct = product;
			}
		}
	}
	return highestProduct;
}

int Problem11::GreatestGoingUpAndDown() {
	int highest{ 0 };
	for (unsigned int column = 0; column < m_numArray.size() - 1; ++column) {
		for (unsigned int row = 0; row < m_numArray.size() - 4; ++row) {
			const int product = m_numArray[row][column] * m_numArray[row + 1][column] * m_numArray[row + 2][column] * m_numArray[row + 3][column];
			//std::cout << m_numArray[row][column] << " " << m_numArray[row + 1][column] << " " << m_numArray[row + 2][column] << " " << m_numArray[row + 3][column] << " = " << product << std::endl;
			if (product > highest) {
				highest = product;
			}
		}
	}
	return highest;
}

int Problem11::GreatestGoingDiagonallyTopLeftToBottomRight() {
	int highest{ 0 };
	for (unsigned int row = 0; row < m_numArray.size() - 4; ++row) {
		for (unsigned int column = 0; column < m_numArray.size() - 4; ++column) {
			const int product = m_numArray[row][column] * m_numArray[row + 1][column + 1] * m_numArray[row + 2][column + 2] * m_numArray[row + 3][column + 3];
			//std::cout << m_numArray[row][column] << " " << m_numArray[row + 1][column + 1] << " " << m_numArray[row + 2][column + 2] << " " << m_numArray[row + 3][column + 3] << " = " << product << std::endl;
			if (product > highest) {
				highest = product;
			}
		}
	}
	return  highest;
}

int Problem11::GreatestGoingDiagonallyBottomLeftToTopRight() {
	int highest{ 0 };
	for (unsigned int row = m_numArray.size() - 1; row > 4; --row) {
		for (unsigned int column = 0; column < m_numArray.size() - 4; ++column) {
			const int product = m_numArray[row][column] * m_numArray[row - 1][column + 1] * m_numArray[row - 2][column + 2] * m_numArray[row - 3][column + 3];
			//std::cout << m_numArray[row][column] << " " << m_numArray[row - 1][column + 1] << " " << m_numArray[row - 2][column + 2] << " " << m_numArray[row - 3][column + 3] << " = " << product << std::endl;
			if (product > highest) {
				highest = product;
			}
		}
	}
	return  highest;
}
