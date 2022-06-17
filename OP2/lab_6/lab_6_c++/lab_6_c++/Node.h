#pragma once
#include <string>
class Node
{
	int data;
	Node* left, * right;
public:
	Node(int value) : data(value), left(nullptr), right(nullptr){}
	void print();
	friend class Tree;
};

