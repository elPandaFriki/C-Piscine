#include <stdio.h>
#include <string.h>

char	*ft_strlowcase(char *str)
{
	int i;
	
	i = 0;
	while(str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return str;
}

int main()
{
	char str[100];
	printf("Insert a highcase string: ");
	fgets(str, 100, stdin);
	printf("\nThis is your string but lowcased: %s", ft_strlowcase(str));
	return (0);
}