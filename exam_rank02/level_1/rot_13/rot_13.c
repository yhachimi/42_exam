#include "unistd.h"

int is_alpha(char c)
{
	if ((c >= 'a' &&  c <= 'm') || (c >= 'A' && c <= 'M'))
		return (2);
	if ((c > 'M' &&  c <= 'Z') || (c > 'm' &&  c <= 'z') )
		return (0);
	return (1);
}

int main(int ac, char **av)
{
	if (ac < 2)
		return (write(1,"\n",1));

	int i;

	i = 0;
	while (av[1][i])
	{
		if (!is_alpha(av[1][i]))
			av[1][i] -= 13;
		else if (is_alpha(av[1][i]) == 2)
			av[1][i] += 13 ;
		write(1,&av[1][i],1);
		i++;
	}
	write(1,"\n",1);
}
