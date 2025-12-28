void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	int	tmp;
	unsigned int	j;

	i = 0;	
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[i])
			{
				tmp = tab[j];
				tab[j] = tab[i];
				tab[i] = tmp;
			}
			j++;
		}
		i++;
	}

}
#include "stdio.h"
int main(void)
{
    int tab[] = {4, 3, 2, 0, 1};
    unsigned int size = 5;
    unsigned int i;

    i = 0;
    while (i < size)
    {
        printf("%d ", tab[i]);
        i++;
    }
    printf("\n");

    sort_int_tab(tab, size);

    i = 0;
    while (i < size)
    {
        printf("%d ", tab[i]);
        i++;
    }
    printf("\n");

    return 0;
}

