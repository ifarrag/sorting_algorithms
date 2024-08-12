#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list
 * @list: Pointer to pointer to list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tempn, *tempp, *nlist, *tlist, *show;

	if (list)
	{
		show = *list;
		nlist = *list;
		tlist = *list;
	}
	else
	{
		nlist = NULL;
	}
	while (nlist)
	{
		tlist = tlist->next;
		nlist = tlist;
		while (nlist && nlist->n < nlist->prev->n)
		{
			tempn = nlist->next;
			tempp = nlist->prev;
			if (tempn)
				tempn->prev = tempp;
			nlist->next = tempp;
			nlist->prev = tempp->prev;
			tempp->next = tempn;
			tempp->prev = nlist;
			if (nlist->prev)
			{
				nlist->prev->next = nlist;
			}
			else
			{
				print_list(nlist);
				break;
			}
			show = nlist;
			while (show->prev)
				show = show->prev;
			print_list(show);
		}
	}
}
