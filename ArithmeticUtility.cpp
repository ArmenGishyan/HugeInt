#include "ArithmeticUtility.h"
#include <algorithm>
#include <cassert>

std::vector<bool>  ArithmeticAtility::addTwoNumber(const std::vector<bool>& number1, const std::vector<bool>& number2)
{
	bool carryBafore = false;
	std::vector<bool> newNumber(std::max(number1.size(), number2.size()) + 1);

	std::vector<bool> vec1 = number1;
	std::vector<bool> vec2 = number2;

	ArithmeticAtility::adjustTwoVec(vec1, vec2);
	assert(vec1.size() == vec2.size());
	int iterTonNewNum = newNumber.size()-1;
	int i = vec1.size() - 1;
	for (int i = 0; i < vec1.size(); ++i)
	{
		if (carryBafore)
		{
			bool carry = false;
			bool result = addTwoBit(vec1[vec1.size() - 1 - i], vec2[vec2.size() - 1 - i], carry);
			newNumber[iterTonNewNum] = addTwoBit(result, carryBafore, carryBafore);
			if (carry) {
				carryBafore = carry;
			}
		}
		else
		{
			bool result = addTwoBit(vec1[vec1.size() - 1 - i], vec2[vec2.size() - 1 - i], carryBafore);

		}
		--iterTonNewNum;
	}

	newNumber[iterTonNewNum] = carryBafore;
	return newNumber;
}

void ArithmeticAtility::copyVector(const std::vector<bool>& vecForCopy, std::vector<bool>& vecToCopy, int startFor, int endFor, int startTo)
{
	while (startFor != endFor)
	{
		vecToCopy[startTo+1] = vecForCopy[startFor];
		startTo++;
		startFor++;
	}
}

bool ArithmeticAtility::shiftVector(std::vector<bool>& vecForShift, int count, bool right /* = true*/)
{
	if (count >= vecForShift.size())
		return false;

	for (int i = vecForShift.size() - 1-count; i >= 0; --i)
	{
		vecForShift[i + count] = vecForShift[i];
		vecForShift[i] = false;
	}
	return true;
}

bool ArithmeticAtility::adjustTwoVec(std::vector<bool>& vec1, std::vector<bool>& vec2)
{
	if (vec1.size() == vec2.size())
		return true;

	if (vec1.size() < vec2.size())
	{
		const int offset = vec2.size() - vec1.size();
		for (int i = 0; i < offset; ++i)
		{
			vec1.push_back(false);
		}
		shiftVector(vec1, offset);
	}
	else
	{
		const int offset = vec1.size() - vec2.size();
		for (int i = 0; i < offset; ++i)
		{
			vec2.push_back(false);
		}
		shiftVector(vec2, offset);
	}
	return true;
}

bool ArithmeticAtility::addTwoBit(bool bit1, bool bit2, bool& carry)
{
	bool result = false;
	int val = bit1 + bit2;
	switch (val)
	{
	case 0: {carry = false;  return false; }
	case 1: {carry = false; return true; }
	case 2: {carry = true; return false; }
	default:
		assert(false);
		break;
	}
}
