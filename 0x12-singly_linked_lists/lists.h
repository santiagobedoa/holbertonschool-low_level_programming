#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>

typedef struct Node {
	char *str;
	int len;
	struct Node *next;
} list_t;

/* PROTOTYPES */
size_t print_list(const list_t *h);

#endif
