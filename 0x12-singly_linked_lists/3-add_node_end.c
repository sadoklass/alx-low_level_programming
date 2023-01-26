#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 *
 * @head: pointer to pointer of first node of a list_t list
 *
 * @str: string to be included in node
 *
 * Return: address of the new element or NULL if it fails
 *
 */

list_t *add_node_end(list_t **head, const char *str)

{
list_t *new;
list_t *current;
current = *head;
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->str = strdup(str);
new->len = _strlen(str);
new->next = NULL;
if (*head == NULL)
*head = new;
else
{
while (current->next != NULL)
current = current->next;
current->next = new;
}
return (new);
}

/**
 * _strlen - returns the length of a string
 *
 * @s: string to be evaluated
 *
 * Return: length of string
 *
 */

int _strlen(const char *s)

{
int i = 0;
while (s[i] != '\0')
i++;
return (i);
}
