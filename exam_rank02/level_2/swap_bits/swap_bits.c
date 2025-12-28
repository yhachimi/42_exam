unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char c = octet >> 4;
	return ((octet << 4) + c );
}
