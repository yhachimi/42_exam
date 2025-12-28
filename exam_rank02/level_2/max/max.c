int		max(int* tab, unsigned int len)
{
	unsigned int	i  = 0;
	int	c  = 0;

	if (!tab || !len)
		return (c);
	while (i < len)
	{
		if (tab[i] > c)
			c = tab[i];
		i++;
	}
	return (c);
}
#include "stdio.h"
int main()
{
	int arr[10] = {10,99,55,66,777,222};

	printf("%d",max(arr,sizeof(arr) / 4));
}
