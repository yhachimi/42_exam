#include "stdlib.h"
#include "unistd.h"


void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1,&str[i],1);
		i++;
	}
}

int count(char *str)
{
	int i = 0;
	int c = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			c++;
		i++;
	}
	return (c);
}

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return i;
}

char *camel_to_snake(char *str)
{
	char *p;

	if (!str)
		return (NULL);
	p = malloc(ft_strlen(str) + count(str) + 1);
	int  i = 0;
	int c = 0;
	while (str[i])
	{
		p[c] = str[i];
		if (str[i + 1] >= 'A' && str[i + 1] <= 'Z' && str[i] != '_')
		{
			p[++c] = '_';
			str[i + 1] += 32;
		}
		c++;
		i++;
	}
	p[c] = '\0';
	return (p);
}
int main(int ac, char **av)
{
	char *str;
	if (ac != 2)
		return (write(1,"\n",1));
	str = camel_to_snake(av[1]);
	ft_putstr(str);
	free(str);
	write(1,"\n",1);
}
