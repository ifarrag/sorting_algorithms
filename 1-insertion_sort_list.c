#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list
 * @list: Pointer to pointer to list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tempn, *tempp;
	listint_t *nlist;

	if (list)
	{
		nlist = *list;
	}
	else
	{
		nlist = NULL;
	}
	while (nlist)
	{
		nlist = nlist->next;
		while (nlist->n < nlist->prev->n)
		{
			tempn = nlist->next;
			tempp = nlist->prev;
			if (tempn)
				tempn->prev = tempp;
			nlist->next = nlist->prev;
			nlist->prev = nlist->prev->prev;
			tempp->next = tempn;
			tempp->prev = nlist;
			if (nlist->prev)
				nlist->prev->next = nlist;
			print_list(*list);
		}
	}
}
