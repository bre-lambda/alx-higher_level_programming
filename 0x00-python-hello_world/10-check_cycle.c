#!/usr/bin/python3
#include "lists.h"
/**
 * check_cycle - check whether a cycle exist in a linked list
 * @list: the head of the linked list
 *
 * Return: 1 if there is a cycle 0 otherwise
 **/
int check_cycle(listint_t *list)
{
listint_t *p1, *p2;
if (list == NULL || list->next == NULL)
return (0);
p1 = list->next;
p2 = list->next->next;
while (p1 && p2 && p2->next)
{
if (p1 == p2)
return (1);
p1 = p1->next;
p2 = p2->next->next;
}
return (0);
}
