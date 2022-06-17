#include "Node.h"
#include <iostream>

void Node::print() {
	std::cout << data << "  ";
	if (left) left->print();
	if (right) right->print();
}