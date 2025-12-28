#include "unistd.h"
#include "unistd.h"

int     check_is_up(char c)
{
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
                return (1);
        return (0);
}

int main(int ac, char **av)
{
	if (ac  < 2)
		return (write(1,"\n",1));
	int	i;

	i = 0;
	while (av[1][i])
	{
		if (check_is_up(av[1][i]))
		{
			if (av[1][i] == 'z' || av[1][i] == 'Z')
				av[1][i] -= 25;
			else
				av[1][i] += 1;
		}
		write(1,&av[1][i],1);
		i++;
	}
	write(1,"\n",1);
}
