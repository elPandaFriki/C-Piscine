#include <stdio.h>
#include <string.h>

char	*ft_strupcase(char *str)
{
	int i;
	
	i = 0;
	while(str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return str;
}

int main()
{
	char str[100];
	printf("Insert a lowcase string: ");
	fgets(str, 100, stdin);
	printf("\nThis is your string but highcased: %s", ft_strupcase(str));
	return (0);
}