#include <unistd.h>
void	ft_print_numbrers(void)

{
	write(1, "0123456789\n", 11);
}

void	ft_is_negative(int	n)
{
	if (n < 0)
	{
		write(1, "N\n", 2);
	}
	else
	{
		write(1, "P\n", 2);
	}
}
