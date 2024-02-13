#include "list.h"

/////////////////////////////
/////// STRUCT ////////////
////////////////////////////
/*typedef struct s_list t_list;

struct s_list
{
	int     data;
	t_list  *next;
};

int ascending(int a, int b)
{
	return (a <= b);
}*/
//////////////////////////////

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int tmp;
	t_list *head;

	head = lst;
	while (lst->next)
	{
		if (!cmp(lst->data,lst->next->data))
		{
			tmp = lst->data;
			lst->data = lst->next->data;
			lst->next->data = tmp;	
			lst = head;
		}
		else
			lst = lst->next;
	}
	return (head);
}

/*
#include <stdio.h>
int main(int ac, char **av)
{
	t_list list1;
	t_list list2;
	t_list list3;
	t_list list4;
	t_list list5;
	t_list list6;
	t_list list7;
	
	list1.data = 2;
	list1.next = &list2;
	list2.data = 1;
	list2.next = &list3;
	list3.data = 3;
	list3.next = &list4;
	list4.data = 7;
	list4.next = &list5;
	list5.data = 6;
	list5.next = &list6;
	list6.data = 4;
	list6.next = &list7;
	list7.data = 5;
	list7.next = NULL;
	
	sort_list(&list1, &ascending);
	while (list1.next)
	{
		printf("%d ", list1.data);
		list1 = *list1.next;
	}
	printf("\n");
	return (0);
}*/
