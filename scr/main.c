#include <stdio.h>
#include <stdlib.h>
#include "listcad.h"

void main(){
	linked_list *l = new_linked_list(-1);

	printf("insert_first:\n");
	insert_first(10, l);
	insert_first(20, l);
	insert_first(30, l);
	insert_first(40, l);
	insert_first(50, l);
	insert_first(60, l);
	insert_first(70, l);
	insert_first(80, l);
	insert_first(90, l);
	insert_first(100, l);
	print(l);
	
	printf("\ninsertat: l[4] = 11:\n");
	insertat(l, 11, 4);
	print(l);
	printf("\ninsertat: l[1] = 22:\n");
	insertat(l, 22, 1);
	print(l);
	printf("\ninsertat: l[5] = 33:\n");
	insertat(l, 33, 5);
	print(l);

	printf("\ninsert_last(500, 600, 700):\n");
	insert_last(500, l);
	insert_last(600, l);
	insert_last(700, l);
	print(l);
	
	printf("\nremove_first:\n");
	remove_first(l);
	print(l);
	printf("\nremove_first:\n");
	remove_first(l);
	print(l);

	printf("\nremoveu posicao [1]:\n");
	removeat(l, 1);
	print(l);
	printf("\nremoveu posicao [5]:\n");
	removeat(l, 5);
	print(l);

	printf("\nremove_last:\n");
	remove_last(l);
	print(l);

	printf("\nremove_last:\n");
	remove_last(l);
	print(l);
}
