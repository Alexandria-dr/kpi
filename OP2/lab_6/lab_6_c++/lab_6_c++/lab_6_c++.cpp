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

	std::cout << "\nобходи дерева:\n\nпрямий:\n";
	tree.TLR(tree.get_root(), 0);

	std::cout << "\nзворотній: \n";
	tree.LRT(tree.get_root(),0);

	std::cout << "\nсиметричний: \n";
	tree.LTR(tree.get_root(),0);

	tree.count_tree_level(tree.get_root(), 1, level_num);
	std::cout << "\nкількість вершин в дереві: " << arr_count;
	std::cout << "\nкількість рівнів в дереві: " << level_num;

	std::cout << "\nвведіть номер рівня: "; std::cin >> num;
	tree.print_tree_level(tree.get_root(), 1, num, vert_lev);
	std::cout << "\nкількість вершин на рівні: " << vert_lev;
	
}
