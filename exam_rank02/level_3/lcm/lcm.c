unsigned int    lcm(unsigned int a, unsigned int b)
{
	if (!a || !b)
		return (0);
	unsigned int x;
	x = a;
	if (b > a)
		x = b;
	while (1)
	{
		if ((x % a == 0) && (x % b == 0))
			return (x);
		x++;
	}
	return (0);
}
#include "stdio.h"

int main()
{
	printf("%d\n",lcm(3,4));
}
