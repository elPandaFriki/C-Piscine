#include <string.h>
#include <stdio.h>

int	*ft_str_is_numeric(char *str)
{
	int i;
	
	i = 0;
	while(i < strlen(str))
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return 0;
		}
		i++;
	}
	return 1;
}

int main()
{
	char str[100];
	printf("Insert a string: ");
	scanf("%s", str);
	if(ft_str_is_numeric(str))
		printf("\nThat string is numeric!");
	else
		printf("\nThat string is not numeric...");
	return (0);
}