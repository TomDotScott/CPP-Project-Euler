#include "Problem9.h"

#include <iostream>

Problem9::Problem9() {
	FindABC();
	std::cout << "A: " << m_a << std::endl << "B: " << m_b << std::endl << "C: " << m_c << std::endl;
	std::cout << Product(m_a, m_b, m_c) << std::endl;
}

void Problem9::FindABC() {
	for (int a = 1; a < 1000; ++a) {
		for (int b = 1; b < 1000; ++b) {
			for (int c = 1; c < 1000; ++c) {
				if (a + b + c == 1000) {
					if ((a * a + b * b) == c * c) {
						m_a = a;
						m_b = b;
						m_c = c;
						return;
					}
				}
			}
		}
	}
}
