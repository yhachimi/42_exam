#include "stdlib.h"

int     *ft_range(int start, int end)
{
	int	range = end - start + 1;
	int	*arr = malloc(sizeof(int) * range);
	int	i = 0;
	while (start <= end)
	{
		arr[i] = start;
		start++;
		i++;
	}
	return (arr);
}
/*#include "stdio.h"
int main()
{
	int	i;

	i = 0;

	while(i < 8)
	{
		printf("%d",ft_range(-1,6)[i]);
		i++;
	}
}*/
