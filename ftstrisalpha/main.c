#include <string.h>
#include <stdio.h>

int	ft_char_is_alpha(char c)
{
	return ('a' <= c && c <= 'z');
}

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!ft_char_is_alpha(*str))
			return (0);
		str++;
	}
	return (1);
}

int main()
{
	char str[100];
	printf("Insert a string: ");
	scanf("%s", str);
	if (ft_str_is_alpha(str) == 0)
		printf("\nThis string isn't alpha");
	else
		printf("\nThis string is alpha");
	return (0);
}