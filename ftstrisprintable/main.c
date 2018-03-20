int ft_strlen(char *a)
{
	int i;

	i = 0;
	while (a[i] != '\0')
	{
		i++;
	}
	return i;
}

int	*ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (i < ft_strlen(str))
	{
		if (!(str[i] >= '32' && str[i] <= '255'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}