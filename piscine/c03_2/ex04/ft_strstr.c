int	ft_strlen(char	*str);
int	head_strstr(char	*str, char	*to_find);

char	*ft_strstr(char	*str, char	*to_find)
{
	if (ft_strlen(str) < ft_strlen(to_find))
		return ((void *)0);
	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			if (head_strstr(str, to_find))
				return (str);
		}
		str++;
	}
	return ((void *)0);
}

int	head_strstr(char *str, char *to_find)
{
	while (*to_find != '\0' && *str != '\0')
	{
		if (*str != *to_find)
			return (0);
		str++;
		to_find++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
