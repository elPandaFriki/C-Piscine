#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_size;

	i = 0;
	dest_size = 0;
	while (dest[dest_size])
		dest_size++;
	while (src[i])
	{
		dest[dest_size] = src[i];
		dest_size++;
		i++;
	}
	dest[dest_size] = '\0';
	return (dest);
}

int main(void){
	char *dest[100];
	char *dest1[100];
	char *src[100];

	printf("Enter a string: ");
	scanf("%s", dest);
	strcpy(dest1, dest);
	printf("Enter another string: ");
	scanf("%s", src);
	strcat(dest, src);
	printf("\nIf i use the standard strcat i get:	%s\n", dest);
	ft_strcat(dest1, src);
	printf("\nIf i use my ft_strcat i get:		%s\n", dest1);
	return (0);
}