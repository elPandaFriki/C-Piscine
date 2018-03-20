#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*remove_whitespaces(char *str)
{
	int		i;
	int		j;
	char	*str2;

	i = 0;
	j = 0;
	str2 = malloc(sizeof(char) * (ft_strlen(str) + 1));
	while (str[i])
	{
		if (str[i] != ' ')
		{
			str2[j] = str[i];
			j++;
		}
		i++;
	}
	str2[j] = '\0';
	return (str2);
}

int main(void)
{
	char *str;
	int MAX_SIZE;
	
	MAX_SIZE = 500;
	str = malloc(sizeof(char) * MAX_SIZE);
	printf("Insert string: ");
	fgets(str, MAX_SIZE, stdin);
	printf("Your string whithout whitespaces is: %s", remove_whitespaces(str));
	return (0);
}