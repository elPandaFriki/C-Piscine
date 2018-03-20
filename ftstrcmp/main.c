#include <string.h>
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i = 0;

	while(s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return 0;
}

int main(void)
{
	char *str1[100];
	char *str2[100];

	printf("Enter a string: ");
	scanf("%s", str1);
	printf("Enter another string: ");
	scanf("%s", str2);
	
	printf("\nstrcmp says:	%i\n", strcmp(str1, str2));
	printf("\nft_strcmp says:	%i\n", ft_strcmp(str1, str2));
	return (0);
}