#pragma once
#include "Node.h"

class Tree
{
	Node * root;
public:
	static int k;
	Tree(): root(nullptr){}
	Node* makeTree(int[], int, int);
	Node* get_root();
	void print();
	void TLR(Node* p, int level);
	void LRT(Node* p, int level);
	void LTR(Node* p, int level);
	void count_tree_level(Node* p, int level, int& level_c);
	void print_tree_level(Node* p, int level, int level_num, int&vert_c);
};


