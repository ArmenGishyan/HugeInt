#include <iostream>
#include "HugeInt.h"
#include "ArithmeticUtility.h"
#include <vector>
#include <algorithm>

int main()
{
	std::vector<bool> vec1;
	vec1.push_back(true);
	vec1.push_back(true);
	

	std::vector<bool> vec2;
	vec2.push_back(true);
	vec2.push_back(true);

	std::vector<bool> vec = ArithmeticAtility::addTwoNumber(vec1, vec2);

	for (int i = 0; i < vec.size(); ++i)
	{
		std::cout << "item = " << vec[i] << std::endl;
	}

	bool f = false;
	ArithmeticAtility::addTwoBit(true, true, f);
	system("pause");
	return 0;
}