#pragma once
// CONTEXT : A Pythagorean triplet is a set of three natural numbers, a < b < c,
// for which:
// 
//			a^2 + b^2 = c^2
//			
// For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.
//
// CHALLENGE : There exists exactly one Pythagorean triplet for which a + b + c = 1000.
// Find the product abc.
class Problem9 {
public:
	Problem9();
private:
	void FindABC();
	static int Product(const int _a, const int _b, const int _c) { return _a * _b * _c; }
	int m_a{ 0 };
	int m_b{ 0 };
	int m_c{ 0 };
};

