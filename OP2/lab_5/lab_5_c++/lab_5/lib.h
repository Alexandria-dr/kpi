#pragma once
#include "TNumber.h"
#include "TIntNumber.h"
#include "TRealNumber.h"
#include <vector>
#include <iostream>

void create_array(int count, std::vector<TIntNumber>&); //��������� ������ � ������ �������
void create_array(int count, std::vector<TRealNumber>&); //��������� ������ � ������������� �������
int sum_first(std::vector<TIntNumber>); //����������� ���� ������ ���� ��� ������ ����� ����� 
int sum_last(std::vector<TRealNumber>); //����������� ���� ������� ���� ��� ������ ������������ ����� 

template<class T>			//������-������� ��� ������ ������ � �������
inline void output_array(std::vector<T> arr)
{
	int a = 0;
	std::cout << '\n';
	for (auto num : arr) {
		std::cout <<a+1<<". " << num.get_str_number() << std::endl;
		a++;
	}
}
