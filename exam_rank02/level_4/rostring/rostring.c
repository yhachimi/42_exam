#include "unistd.h"
#include "stdlib.h"
static int count()
{
}

int main(int ac,char **av)
{
	if (ac < 2)
		return (write(1,'\n',1),1);
}
