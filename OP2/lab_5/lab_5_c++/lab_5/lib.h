#pragma once
#include "TNumber.h"
#include "TIntNumber.h"
#include "TRealNumber.h"
#include <vector>
#include <iostream>

void create_array(int count, std::vector<TIntNumber>&); //створення масиву з цілими числами
void create_array(int count, std::vector<TRealNumber>&); //створення масиву з раціональними числами
int sum_first(std::vector<TIntNumber>); //знаходження суми перших цифр для масиву цілих чисел 
int sum_last(std::vector<TRealNumber>); //знаходження суми останніх цифр для масиву раціональних чисел 

template<class T>			//шаблон-функція для виводу масиву в консоль
inline void output_array(std::vector<T> arr)
{
	int a = 0;
	std::cout << '\n';
	for (auto num : arr) {
		std::cout <<a+1<<". " << num.get_str_number() << std::endl;
		a++;
	}
}
