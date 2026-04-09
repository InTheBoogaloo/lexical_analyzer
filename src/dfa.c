#include <stdio.h>
#include <stdlib.h>
#include "../include/dfa.h"

typedef struct Node{
	Token_type class;
	int final_status;
}Node;

struct Dfa{
	Node** head;
};

int main(){
	return 0;
}
