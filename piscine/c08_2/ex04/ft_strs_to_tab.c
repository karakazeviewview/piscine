#include "ft_stock_str.h"
#include <stdlib.h>

int     ft_strlen(char *str);
char    *ft_strdup(char *src);
char    *ft_strcpy(char *dest, char *src);

struct s_stock_str  *ft_strs_to_tab(int ac, char **av)
{
    t_stock_str *strings;
    int	i;

i = 0;
    strings = (t_stock_str *)malloc(sizeof (t_stock_str) * (ac + 1));
    if (strings == NULL)
return (strings);
    while (i < ac)
    {
strings[i].size = ft_strlen(av[i]);
strings[i].str = av[i];
strings[i].copy = ft_strdup(av[i]);
i++;
    }
    strings[i].str = 0;
    return (strings);
}

int ft_strlen(char *str)
{
    int i;

i = 0;
    while (*(str + i))
i++;
    return (i);
}

char    *ft_strdup(char *src)
{
    char    *str;

str = (char *)malloc(sizeof (src));
    if (str == NULL)
return (str);
    else
    {
ft_strcpy(str, src);
return (str);
    }
}

char    *ft_strcpy(char *dest, char *src)
{
    int i;

i = 0;
    while (*(src + i))
    {
*(dest + i) = *(src + i);
i++;
    }
    *(dest + i) = '\0';
    return (dest);
}
