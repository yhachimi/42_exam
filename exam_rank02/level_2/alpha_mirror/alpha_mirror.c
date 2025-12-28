#include "unistd.h"
int     check_is_up(char c)
{
        if (c >= 'a' && c <= 'z')
                return 0;
        if (c >= 'A' && c <= 'Z')
                return (1);
        return (2);
}

int main(int ac, char **av)
{
	int  i = 0;
	int c = 0;
	if (ac < 2)
		return (write(1,"\n",1));
	while (av[1][i])
	{
		if (check_is_up(av[1][i]) == 1)
		{
			c = 26 - (av[1][i] - 64) + 1;
			av[1][i] = 64 + c;
		}
		else if (check_is_up(av[1][i]) == 0)
		{
			c = 26 - (av[1][i] - 96) + 1;
			av[1][i] = 96 + c;
		}
		write(1,&av[1][i],1);
		i++;
	}
}
