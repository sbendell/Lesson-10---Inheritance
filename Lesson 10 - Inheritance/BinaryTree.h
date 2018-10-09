#pragma once
#include "Comparable.h"
#include <iostream>

struct node {
	Comparable* value;
	struct node* left;
	struct node* right;
};

class BinaryTree
{
public:
	BinaryTree(Comparable* comparable);
	~BinaryTree();
	node* get_primary_node();
	void insert_integer(struct node* tree, int value);
	void print_tree(struct node* tree);
	void terminate_tree(struct node* tree);
	bool Search(struct node* leaf, int value) const;
private:
	node* primaryNode;
};