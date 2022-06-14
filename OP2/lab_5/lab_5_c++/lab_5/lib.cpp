#include "lib.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void create_array(int count, std::vector<TIntNumber>& arr)
{
	for (int i = 0; i < count; i++) {
		arr.push_back(TIntNumber(rand() % 1000 + 1));
	}
}

void create_array(int count, std::vector<TRealNumber>& arr) {
	for (int i = 0; i < count; i++) {
		float num = (rand() % 1000 + 1) + ((rand() % 100)/100000.0);
		arr.push_back(TRealNumber(num));
	}
}

int sum_first(std::vector<TIntNumber> arr) {
	int res = 0;
	for (TIntNumber num : arr) {
		res += num.find_first_digit();
	}
	return res;
}

int sum_last(std::vector<TRealNumber> arr) {
	int res = 0;
	for (TRealNumber num : arr) {
		res += num.find_last_digit();
	}
	return res;
}
