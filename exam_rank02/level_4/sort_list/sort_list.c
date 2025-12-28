#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int	content;
	t_list	*sort;
	t_list	*tmp;


	if  (!lst || !cmp)
		return (NULL);
	tmp = lst;
	while (tmp->next)
	{
		sort = tmp;
		while (sort)
		{
			if (!cmp(sort->data,tmp->next->data))
			{
				content = tmp->next->data;
				tmp->next->data = sort->data;
				sort->data = content;
			}
			sort = sort->next;
		}
		tmp = tmp->next;
	}
	return (lst);
}
