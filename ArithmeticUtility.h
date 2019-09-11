#pragma once
#include <vector>

namespace ArithmeticAtility
{
	std::vector<bool> addTwoNumber(const std::vector<bool>& number_1, const std::vector<bool>& number_2);
	void copyVector(const std::vector<bool>& vecForCopy, std::vector<bool>& vecToCopy, int startFor, int endTo, int startTo);
	bool shiftVector(std::vector<bool>& vecForShift, int count, bool right = true);
	bool adjustTwoVec(std::vector<bool>& vec1, std::vector<bool>& vec2);
	bool addTwoBit(bool bit1, bool bit2, bool& carry);
}