#include "unistd.h"

int is_in(char c , char *str)
{
	int i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}


int main(int ac, char **av)
{

	if (ac != 3)
		return (write(1,"\n",1));
	int i  = 0;
	int printd[256] = {0};
	
	while (av[1][i])
	{
		if (is_in(av[1][i],av[2]) && !printd[(unsigned char)av[1][i]])
		{
			printd[(unsigned char)av[1][i]] = 1;
			write(1,&av[1][i],1);
		}
		i++;
	}
	write(1,"\n",1);
}
