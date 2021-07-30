int		ft_strlen(char *str)
{
	int c;

	c = 0;
	while (*str != 0x00)
	{
		c++;
		str++;
	}
	return (c);
}
