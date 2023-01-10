#ifndef MYLINKEDLIST_H
#define MYLINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct node {
	int x;
	double x_root2;
	double x_root3;
	double x_root4;
	struct node *next;
};

struct node * insert_node(struct node *list, struct node *new_node);
struct node * search_list(struct node *list, int number);
void delete_list(struct node *list);


#endif