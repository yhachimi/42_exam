#include "unistd.h"
int main(int ac,char **av)
{
	if (ac != 3)
		return (write(1,"\n",1));
	int printd[256] = {0};
	int i = 0;
	while (av[1][i])
	{
		if (!printd[(unsigned char)av[1][i]])
		{
			printd[(unsigned char)av[1][i]] = 1;
			write(1,&av[1][i],1);
		}
		i++;
	}
	i = 0;
	while (av[2][i])
	{
		if (!printd[(unsigned char)av[2][i]])
		{
			printd[(unsigned char)av[2][i]] = 1;
			write(1,&av[2][i],1);
		}
		i++;
	}
	write(1,"\n",1);

}

