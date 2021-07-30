#include <stdlib.h>

int	ft_strlen(char	*str);
char	*ft_strdup(char	*src);
struct s_stock_str	*ft_strs_to_tab(int	ac, char	**av);

typedef struct	s_stock_str
{
	int	size;
	char	*str;
	char	*copy;
}	t_stock_str;

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char	*src)
{
	char	*dest;
	int	i;

	dest = (char *)malloc(ft_strlen(src) + 1);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	if (dest)
		return (dest);
	else
		return (0);
}

struct s_stock_str	*ft_strs_to_tab(int	ac, char	**av)
{
	t_stock_str	*p;
	int	i;

	p = (t_stock_str *)malloc((ac + 1) * sizeof(it_stock_str));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		p[i].size = ft_strlen(*(av + i));
		p[i].str = ft_strdup(*(av + i));
		p{i}.copy = ft_strdup(p[i].str);
		i++;
	}
	p[i].str = 0;
	return (p);
}
