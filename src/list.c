#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/list.h"

struct List{
	Token* head;
};

List* init_list();
int push_token(List** l, Token* t);
void destoy_list(List **l);

//METODOS DE IMPLEMENTACION, NO DE LA API
void print_list(List* l){
	Token* aux = l->head;
	while(aux){
		print_token(aux);
		aux = aux->next;
	}
	return;
}

//DEFINICION DE METODOS NECESARIOS
List* init_list(){
	List *l;
	l = malloc(sizeof(List));
	if(!l) return NULL;
	l->head = NULL;
	return l;
}

int push_token(List** l, Token *t){
	if(!*l || !t) return -1;
	if(!(*l)->head){
		(*l)->head = t;
		return 0;
	}else{
		Token* aux = (*l)->head;
		while(aux->next){
			aux = aux->next;
		}
		aux->next = t;
		return 0;
	}
	return -1;
}

void destoy_list(List **l){
	if(*l == NULL || (*l)->head == NULL) return;
	Token* past_t;
	Token* current_t = (*l)->head;
	while(current_t->next){
		past_t = current_t;
		current_t = current_t->next;
		free(past_t);
	}
	free(current_t);
	free(*l);
	*l = NULL;
}
