#include "TRealNumber.h"
#include <string>

TRealNumber::TRealNumber(float num)
{
	std::string str = std::to_string(num);
	int p = str.find('.');
	number = std::stoi(str.substr(0,p));
	frac = std::stoi(str.substr(p + 1));
}

std::string TRealNumber::get_str_number()
{
	return std::to_string(number) + '.' + std::to_string(frac);
}

int TRealNumber::find_last_digit()
{
	std::string str = std::to_string(frac);
	return str[str.length() - 1] - '0';
}
