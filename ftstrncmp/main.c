#include <string.h>
#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i = 0;

	while(i < n)
	{
		if (s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
		if (s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

int clean_stdin()//clean_stdin() is always TRUE because the function return always 1. Also, clean_stdin() will be executed only if the user enter a string containing non numeric character
{
    while (getchar() != '\n');
    return 1;
}

//	0000001 	0002
int main()
{
	unsigned int i;
	char str1[100];
	char str2[100];
	char c;
	printf("Insert a string: ");
	scanf("%s", str1);
	printf("Insert another string: ");
	scanf("%s", str2);
	printf("Insert the number of caracters to compare: ");
  while (((scanf("%d%c", &i, &c) != 2 || c != '\n') && clean_stdin()));//This means expecting from the user input an integer and close to it a non numeric character.


	if (ft_strncmp(str1, str2, i) != 0)
		printf("\nThose string are not equal!\nThe difference between the first %i characters of %s and %s is %i\n", i, str1, str2, ft_strncmp(str1, str2, i));
	else
		printf("Those strings are equal for the %i first caracters!", i);
	return (0);
}