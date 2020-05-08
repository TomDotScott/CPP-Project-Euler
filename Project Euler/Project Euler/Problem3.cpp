#include "Problem3.h"

unsigned long long int Problem3::PrimeFactors(unsigned long long int _number)
{
	unsigned long long int factor{ 2 };
	while(_number != factor)
	{
		//if number is divisible, then divide
		if(_number % factor == 0)
		{
			_number = _number / factor;
		}
		factor++;
	}
	return _number;
}
