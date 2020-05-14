#include "Problem14.h"

#include <iostream>
#include <vector>

Problem14::Problem14(int _limit)
{
	int longestChain{ 2 };
	long largestNumber{ 2 };
	//stores the powers of 2 for easy access in the collatz chain
	std::vector<long> powersOfTwoCache{
		1, 2, 4, 8, 16, 32, 64, 128, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304
	};
	for(long i = 2; i < _limit ; ++i)
	{
		const int currentChain = Collatz(i, powersOfTwoCache);
		if(currentChain > longestChain)
		{
			longestChain = currentChain;
			largestNumber = i;
			std::cout << largestNumber << " PRODUCED A CHAIN OF LENGTH : " << longestChain << std::endl;
		}
	}
}

int Problem14::Collatz(long _num, std::vector<long>& _powersOfTwoCache)
{
	int chainLength{ 0 };
	while (_num != 1)
	{
		if(_num % 2 == 0)
		{
			_num /= 2;
		}else
		{
			_num = 3 * _num + 1;
		}
		chainLength++;
		//if the number is a power of 2, it is going to reach 1
		if(ceil(log2(_num)) == floor(log2(_num)))
		{
			chainLength += BinarySearch(_powersOfTwoCache, 0, static_cast<int>(_powersOfTwoCache.size() - 1), _num);
			return chainLength + 1;
		}
	}
	return chainLength + 1;
}

int Problem14::BinarySearch(std::vector<long>& _iterable, const int _startPoint, const int _endPoint, long& _valueToFind)
{
	if(_endPoint >= 1)
	{
		if (_endPoint >= _startPoint) {
			int mid = _startPoint + (_endPoint - _startPoint) / 2;

			// If the element is present at the middle 
			// itself 
			if (_iterable[mid] == _valueToFind)
				return mid;

			// If element is smaller than mid, then 
			// it can only be present in left subarray 
			if (_iterable[mid] > _valueToFind)
				return BinarySearch(_iterable, _startPoint, mid - 1, _valueToFind);

			// Else the element can only be present 
			// in right subarray 
			return BinarySearch(_iterable, mid + 1, _endPoint, _valueToFind);
		}

		// We reach here when element is not 
		// present in array 
		return -1;
	}
	//if the element is not in the array
	return -1;
}
