#include "Tree.h"
#include <iostream>

Node* Tree::makeTree(int arr[], int from, int free) {
	if (free == 0) return nullptr;
	Node* p = new Node(arr[from]);
	if (k == 0) {
		root = p;
		k++;
	}
	int left_ch = free / 2;
	int right_ch = free - left_ch - 1;
	p->left = makeTree(arr, from + 1, left_ch);
	p->right = makeTree(arr, from + 1 + left_ch, right_ch);
	return p;
}

Node* Tree::get_root()
{
	return root;
}

void Tree::print() {
	root->print();
}

void Tree::TLR(Node* p, int level)  //прямий обхід
{
	if (p) {
		for (int i = 0; i < level-1; i++) std::cout << "    ";
		if (level != 0) std::cout << "----";
		std::cout << p->data << std::endl;
		TLR(p->left, level + 1);
		TLR(p->right, level + 1);
	}
}

void Tree::LRT(Node* p, int level)  //обхід в зворотньому порядку
{
	if (p) {
		
		LRT(p->left, level + 1);
		LRT(p->right, level + 1);
		for (int i = 0; i < level - 1; i++) std::cout << "    ";
		if (level != 0) std::cout << "----";
		std::cout << p->data << std::endl;
	}
}

void Tree::LTR(Node* p, int level) //симетричний обхід
{
	if (p) {
		
		LTR(p->left, level + 1);
		for (int i = 0; i < level - 1; i++) std::cout << "    ";
		if (level != 0) std::cout << "----";
		std::cout << p->data << std::endl;
		LTR(p->right, level + 1);
	}
}

void Tree::count_tree_level(Node* p, int level, int& level_c)
{
	if (p)
	{
		count_tree_level(p->left, level + 1, level_c);
		if (level_c < level) level_c = level;
		count_tree_level(p->right, level + 1, level_c);
	}
}

void Tree::print_tree_level(Node* p, int level, int level_num, int& vert_c)
{
	if (p)
	{
		print_tree_level(p->left, level + 1, level_num, vert_c);
		if (level == level_num) {
			std::cout << p->data << "  ";
			vert_c++;
		}
		print_tree_level(p->right, level + 1, level_num, vert_c);
	}
}
