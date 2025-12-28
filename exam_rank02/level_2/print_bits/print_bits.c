#include "unistd.h"

void	helper(unsigned int c, int i)
{
	char *base = "01";
	if (i > 0)
		helper(c / 2, i - 1);
	write(1,&base[c % 2],1);
}
void	print_bits(unsigned char octet)
{
	helper(octet,8);
}
int main()
{
print_bits(2);
}
