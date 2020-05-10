#pragma once
#include <string>
#include <iostream>
#include <vector>

// CONTEXT : In the 20x20 grid, four numbers along a diagonal line have been marked in red
//
// The product of these numbers is 26 x 63 x 78 x 14 = 1788696
// CHALLENGE : What is the greatest product of four adjacent numbers in the same direction (up, down, left, right, or diagonally) in the 20x20 grid?
class Problem11 {
public:
	explicit Problem11(std::string& _fileName) {
		OpenFile(_fileName);
		std::vector<int> results{
			GreatestGoingLeftAndRight(),
			GreatestGoingUpAndDown(),
			GreatestGoingDiagonallyTopLeftToBottomRight(),
			GreatestGoingDiagonallyBottomLeftToTopRight()
		};
		int highest{ 0 };
		for (auto result : results) {
			if (result > highest) {
				highest = result;
			}
		}

		std::cout << "HIGHEST PRODUCT : " << highest << std::endl;
	}
private:
	void OpenFile(std::string& _fileName);
	int GreatestGoingLeftAndRight();
	int GreatestGoingUpAndDown();
	int GreatestGoingDiagonallyBottomLeftToTopRight();
	int GreatestGoingDiagonallyTopLeftToBottomRight();

	std::vector<std::vector<int>> m_numArray;
};

