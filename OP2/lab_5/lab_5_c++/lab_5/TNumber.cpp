#include "TNumber.h"

TNumber::TNumber()
{
	number = 0;
}

TNumber::TNumber(int num)
{
	number = num;
}

std::string TNumber::get_str_number()
{
	return std::to_string(number);
}

int TNumber::find_sum()
{
	std::string str = std::to_string(number);
	int res = 0;
	for (int i = 0; i < str.length(); i++) {
		res += str[i] - '0';
	}
	return res;
}

int TNumber::find_first_digit()
{
	return std::to_string(number)[0] - '0';
}

int TNumber::find_last_digit()
{
	std::string str = std::to_string(number);
	return str[str.length() - 1] - '0';
}
