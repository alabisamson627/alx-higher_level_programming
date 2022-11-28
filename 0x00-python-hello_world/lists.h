#ifndef LISTS_H
#define LIST_H

#include <stdlib.h>

typedef struct listint_s
{
int n;
struct listint_s *next;
} listint_s

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

#endif /* LIST_H */ 
