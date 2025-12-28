#include "stdlib.h"

int     *ft_rrange(int start, int end)
{
	int	range = end - start + 1;
	int *arr = malloc(sizeof(int) * range);
	int	i = 0;
	while (end >= start)
	{
		arr[i] = end;
		i++;
		end--;
	}
	return (arr);
}
/*#include "stdio.h"

int main()
{
	int	i;

	i = 0;
	while (i < 7)
	{
		printf("%d",ft_rrange(-1,5)[i]);
		i++;
	}
}*/
