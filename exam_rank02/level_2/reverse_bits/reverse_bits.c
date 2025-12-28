unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char rever;
	int	i;

	rever = 0;
	i = 8;

	while (i--)
	{
		rever = (rever << 1) | (octet & 1);
		octet = octet >> 1;
	}
	return (rever);
}
