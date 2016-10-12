/* list.h */

#ifndef LIST_H
#define LIST_H

typedef struct LinkNode {
	int data;
	struct LinkNode *next;
}LinkNode, List;

void list_init(List *l, int data);
int insert(List *l, int index, int e);
int delete(List *l, int index);
int find(List *l, int x);



#endif
