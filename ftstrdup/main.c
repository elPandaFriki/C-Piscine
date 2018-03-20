#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*string;
	int		src_size;
	int		i;

	i = 0;
	src_size = 0;
	while (src[src_size])
	{
		src_size++;
	}
	string = (char*)malloc(sizeof(*string) * (src_size));
	while (i < src_size)
	{
		string[i] = src[i];
		i++;
	}
	string[src_size] = '\0';
	return (string);
}

int main(void)
{
	char *src[100];

	printf("Enter a string: ");
	scanf("%s", src);
	printf("\nstrdup says:		%s", strdup(src));
	printf("\n\nMy ft_strdup says:	%s", ft_strdup(src));
	return 0;
}