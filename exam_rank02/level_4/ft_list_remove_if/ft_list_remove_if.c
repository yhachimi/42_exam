#include "stdlib.h"

typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(void *,void *))
{
	t_list	*help;
	t_list	**curent;
	if (!begin_list || !cmp)
		return ;

	curent = begin_list;
	while (*curent)
	{
		if (!cmp((*curent)->data,data_ref))
		{
			help = *curent;
			*curent = (*curent)->next;
			free(help->data);
			free(help);
		}
		else
			curent = &(*curent)->next;

	}
}
