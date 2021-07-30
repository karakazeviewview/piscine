#include "ft_stock_str.h"
#include <unistd.h>

void    ft_putnbr(int nb);
void    is_not_positive(int *nb);

void    ft_show_tab(struct s_stock_str *par)rtmux-4200
{
    int     i;
    int     j;

i = 0;
    j = 0;
    while (par[i].str)
    {
write(1, par[i].str, par[i].size);
write(1, "\n", 1);
ft_putnbr(par[i].size);
write(1, "\n", 1);
write(1, par[i].copy, par[i].size);
write(1, "\n", 1);
i++;
    }
}

void    ft_putnbr(int nb)
{
    int     i;
    int     flag;
    char    str[12];

i = 0;
    flag = 0;
    if (nb <= 0)
    {
if (-2147483648 < nb && nb < 0)
flag = 1;
is_not_positive(&nb);
    }
    while (nb)
    {
str[i] = '0' + nb % 10;
nb /= 10;
i++;
    }
    if (flag)
write(1, "-", 1);
    while (i > 0)
    {
write(1, &str[i - 1], 1);
i--;
    }
}

void    is_not_positive(int *nb)
{
    if (*nb == 0)
write(1, "0", 1);
    else if (*nb == -2147483648)
    {
write(1, "-2147483648", 11);
*nb = 0;
    }
    else
*nb *= -1;
}
