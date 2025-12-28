#include "unistd.h"
int is_char(char c)
{
	if ((c >= 'a' && c <=  'z') || ( c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int main(int ac, char **av)
{
	if (ac != 2)
		return (write(1,"\n",1));
	int i = 0;
	while (av[1][i])
	{
		if (av[1][i] != ' ')
			write(1,&av[1][i],1);
		else if(i > 0 && av[1][i] == ' ' && is_char(av[1][i - 1]))
				break ;
		i++;
	}
	write(1,"\n",1);
}
