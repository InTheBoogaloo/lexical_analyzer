#include <stdio.h>
#include <stdlib.h>
#include "../include/ast.h"


typedef struct Node{
	struct Node *left, *right;
}Node;

struct Tree{
	Node *root;
};

Node* init_node();
Tree* init_tree();

int main(){
	Tree * t;
	printf("hola mundo\n");
	return 0;
}

Node* init_node(){
	Node* n;
	n = (Node*)malloc(sizeof(Node));
	if(!n) return NULL;
	n->left = NULL;
	n->right = NULL;
	return n;
}

Tree* init_tree(){
	Tree* t;
	t = (Tree*)malloc(sizeof(Tree));
	if(!t) return NULL;
	t->root = NULL;
	return t;
}
