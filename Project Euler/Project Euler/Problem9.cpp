#include "Problem9.h"

#include <iostream>

Problem9::Problem9() {
	ElegantFindABC();
	std::cout << "A: " << m_a << std::endl << "B: " << m_b << std::endl << "C: " << m_c << std::endl;
	std::cout << Product(m_a, m_b, m_c) << std::endl;
}

void Problem9::FindABC() {
	for (int c = 500; c > 0; --c) {
		for (int b = 0; b < c; ++b) {
			for (int a = 0; a < b; ++a) {
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

void Problem9::ElegantFindABC() {
	// We can form simultaneous equations from the 2 facts given to us
	// EQ 1 : a^2 + b^2 = c^2
	// EQ 2 : a + b + c = 1000, rearranged to c = 1000 - a - b
	// Substituting this value for c into EQ 1 we get :
	// EQ 3 : a^2 + b^2 = (1000 - a - b)^2
	// When EQ 3 is expanded and simplified we get :
	// a^2 + b^2 = 1000^2 + a^2 + b^2 - 2000a - 2ab - 2000b
	// or...
	// a = 1000^2 - 2000b
	//     --------------
	//		 2000 - 2b
	// We can then use this to work out the value of c,
	// and then check if a + b + c = 1000
	int a{ 0 };
	for (int b = 1; b < 500; ++b) {
		a = ((1000 * 1000) - 2000 * b) / (2000 - 2 * b);
		const int cSquared = a * a + b * b;
		const int c = static_cast<int>(sqrt(cSquared));
		if(a + b + c == 1000)
		{
			m_a = a;
			m_b = b;
			m_c = c;
			return;
		}
	}
}
