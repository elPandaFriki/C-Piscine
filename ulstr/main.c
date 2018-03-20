#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*change_case(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + ' ';
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - ' ';
		i++;
	}
	return (str);
}

int main()
{
	char *str;
	
	str = malloc(sizeof(char) * 500);
	printf("Insert string:				");
	fgets(str, 500, stdin);
	printf("This is your string change-cased:	 %s", change_case(str));
	return (0);
}