
typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

int	ft_list_size(t_list *begin_list)
{
	int indx;

	indx = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		++indx;
	}
	return (indx);
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

	printf("List size: %d\n",ft_list_size(&list1, &ascending));
	return (0);
}*/
