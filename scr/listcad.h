#ifndef LISTCAD_H
#define LISTCAD_H

typedef struct Node {
	int x;
	struct Node *next;
	struct Node *previous;	
} node;

typedef struct {
	node *first;
	node *last;
	int count;
	int max;
} linked_list;

linked_list *new_linked_list(int size);
int is_empty(linked_list *l);
int is_full(linked_list *l);
void insert_first(int x, linked_list *l);
node *create_node(int x);
void print(linked_list *l);
void removeat(linked_list *l, int x);
void remove_first(linked_list *l);
void remove_last(linked_list *l);
void insert_last(int x, linked_list *l);
void insertat(linked_list *l, int x, int posicao);

#endif
