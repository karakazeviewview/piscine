#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != 0x00)
	{
		write(1, str, 1);
		str++;
	}
}
