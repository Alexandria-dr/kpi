#pragma once
#include <string>
class TNumber
{
protected:
	int number;
public:
	TNumber();
	TNumber(int);
	virtual std::string get_str_number();
	int find_sum();
	int find_first_digit();
	virtual int find_last_digit();
};

