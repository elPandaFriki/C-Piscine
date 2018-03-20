#include <string.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int i;
	
	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z'){
		str[i] = str[i] - 32;
		i++;
	}
	while(str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] == ' ')
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return str;
}

int main()
{
	char str[100];
	printf("Insert a string: ");
	fgets(str, 100, stdin);
	printf("\nThis is your string but capitalized: %s", ft_strcapitalize(str));
	return (0);
}