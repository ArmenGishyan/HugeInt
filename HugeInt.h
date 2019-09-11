#pragma once
#include <string>
#include <bitset>
#include <iostream>

template<int T>
class HugeInt
{
public:
	HugeInt(const std::string& str);
	HugeInt& operator + (const HugeInt& obj);
	HugeInt& operator - (const HugeInt& obj);
	HugeInt& operator / (const HugeInt& obj);
	HugeInt& operator * (const HugeInt& obj);

private:
	static int charToInt(char ch);
	std::bitset<T> m_bits;
};

template <int T>
HugeInt<T>::HugeInt(const std::string& str)
{

}

template <int T>
HugeInt<T>& HugeInt<T>::operator + (const HugeInt<T>& obj)
{
	return *this;
}

template <int T>
HugeInt<T>& HugeInt<T>::operator - (const HugeInt<T>& obj)
{
	return *this;
}

template <int T>
HugeInt<T>& HugeInt<T>::operator / (const HugeInt<T>& obj)
{
	return *this;
}

template <int T>
HugeInt<T>& HugeInt<T>::operator * (const HugeInt<T>& obj)
{
	return *this;
}

template <int T>
int HugeInt<T>::charToInt(char ch)
{
	return 0;
}

