#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[n] = '\0';
	return (dest);
}

int clean_stdin()//clean_stdin() is always TRUE because the function return always 1. Also, clean_stdin() will be executed only if the user enter a string containing non numeric character
{
    while (getchar() != '\n');
    return 1;
}

int main(void)
{
	char src[1000];
	unsigned int i;
	char c;
	printf("Insert the number of characters to display: ");
  while (((scanf("%d%c", &i, &c) != 2 || c != '\n') && clean_stdin()));//Input a character and close it to its numeric value.
	printf("Insert a string: ");
	fgets(src, i, stdin);//fgets, alike scanf, let you input whitespaces. fgets(where you gonna storage, size of storage, input method: stdin is the standard)
	char dest[1000];
	printf(ft_strncpy(dest, src, i));
	return (0);
}