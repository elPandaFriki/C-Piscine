#include <stdio.h>

int		nmatch(char *s1, char *s2)
{
	/*opposite to default: "everything is okay and we reached the end"*/
  if (*s1 == *s2 && *s1 == '\0') return (1);/*
  standard case to go through both lines until we reach an end*/
	if (*s1 == *s2 && *s1 != '*') return (nmatch(s1 + 1, s2 + 1));/*
	special case where the star is an empty character, a character or more than one character and can be replaced in order to obtain a string equal to the original*/
	if (*s2 == '*' && *s1 != '\0') return (nmatch(s1 + 1, s2) + nmatch(s1, s2 + 1));/*
	special case where * can be interpreted as end of line or remove multiple * from the end of the second string*/
	if (*s2 == '*' && *s1 == '\0') return (nmatch(s1, s2 + 1));/*
	special case where s1 is a * and we can skip it*/
	if (*s1 == '*' && *s1 == *s2) return (nmatch(s1 + 1, s2));/*
	default case: "something is wrong and we have not reached the end"*/
	return (0);
}

int		main(void)
{
	int		i;
	char	a[100];
	char	b[100];

	printf("Enter first string:  ");
	scanf("%s", a);
	printf("Enter second string: ");
	scanf("%s", b);
	printf("\nYou have entered %s and %s.\n", a, b);
	i = nmatch(a, b);
	if (i == 0)
		printf("\nIt seems those strings doesn't match.\n");
	else
		printf("\nThe number of matches between %s and %s is: %i\n", a, b, i);
	return (0);
}