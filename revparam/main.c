#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*rev_param(char *str)
{
	int SIZE;
	int j;
	char *str2;

	j = 0;
	SIZE = ft_strlen(str);
	str2 = malloc(sizeof(char) * SIZE--);
	SIZE--;
	while (str[j])
	{
		str2[j] = str[SIZE];
		SIZE--;
		j++;
	}
	return (str2);
}

int main()
{
	char *str;
	int SIZE = 500;
	
	str = malloc(sizeof(char) * SIZE);
	printf("Insert string:			");
	fgets(str, SIZE, stdin);
	printf("\nYour string reversed is:	 %s\n", rev_param(str));
	return (0);
}