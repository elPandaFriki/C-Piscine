#include <string.h>
#include <stdio.h>

int	match(char *s1, char *s2)
{
	//opposite to default case: everything is okay and we reached the end
  if (*s1 == *s2 && *s1 == '\0') return (1);/*
  standard case (also known as "Ampliation of default case") to go through both lines until we reach an end.*/
	if (*s1 != '*' && *s1 == *s2) return (match(s1 + 1, s2 + 1));/*
	special case where the star is an empty character, a character or a string so it can be replaced in order to obtain a string equal to the original*/
	if (*s2 == '*' && *s1 != '\0') return (match(s1 + 1, s2) || match(s1, s2 + 1));/*
	"return ( a || b)" is a logical OR that return 1 is only one of the two parameters is true which means that * can be a letter or empty but not both at the same time.
	special case where a * (or multiple) can be interpreted as end of line*/
	if (*s2 == '*' && *s1 == '\0') return (match(s1, s2 + 1));/*
	special case where s1 is a * and we can skip it*/
	if (*s1 == '*' && *s1 == *s2) return (match(s1 + 1, s2));/*
	default case: something is wrong and we have not reached the end*/
	return (0);
}

int     main()
{
	int		i;
	char	a[100];
	char	b[100];

	printf("Enter first string:  ");
	scanf("%s", a);
	printf("Enter second string: ");
	scanf("%s", b);
	printf("\n(%s) is your first string and (%s) is your second string.\n", a, b);
	i = match(a, b);
	if (i == 1)
		printf("\nCONGRATULATIONS! THE STRING MATCHED!\n");
	else
		printf("\nI'm sorry but those strings don't match...\n");
	return (0);
}