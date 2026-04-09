#include <stdio.h>
#include <stdlib.h>
#include "../include/token.h"

Token* init_token(){
	Token* t;
	t = malloc(sizeof(Token));
	if(!t) return NULL;
	t->next = NULL;
	t->lexeme = NULL;
	t->type = UNKNOWN;
	return t;
}

void print_token(Token* t){
	printf("current token:%p\n", t);
	printf("next:%p\n", t->next);
	printf("lexeme:%s\n", t->lexeme);
	printf("type:%i\n", t->type);
}
