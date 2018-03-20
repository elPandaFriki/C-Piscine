#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	dest[i + 1] = '\0';
	return (dest);
}

int main(){
	char dest[100];
	char src[100];
	printf("Insert a string: ");
	fgets(src, 100, stdin);
	printf("standard strcpy says:	");
	printf(strcpy(dest, src));
	printf("my ft_strcpy says:	");
	printf(ft_strcpy(dest, src));
	return (0);
}