#include <iostream>
#include <Windows.h>
#include "Tree.h"
#include "lib.h"
int Tree::k;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int num, vert_lev = 0, level_num = 0;
	Tree tree;

	int arr_count = 0;
	int* arr = get_array(arr_count);

	tree.makeTree(arr, 0, arr_count);
	tree.print();

	std::cout << "\n������ ������:\n\n������:\n";
	tree.TLR(tree.get_root(), 0);

	std::cout << "\n��������: \n";
	tree.LRT(tree.get_root(),0);

	std::cout << "\n�����������: \n";
	tree.LTR(tree.get_root(),0);

	tree.count_tree_level(tree.get_root(), 1, level_num);
	std::cout << "\n������� ������ � �����: " << arr_count;
	std::cout << "\n������� ���� � �����: " << level_num;

	std::cout << "\n������ ����� ����: "; std::cin >> num;
	tree.print_tree_level(tree.get_root(), 1, num, vert_lev);
	std::cout << "\n������� ������ �� ���: " << vert_lev;
	
}
