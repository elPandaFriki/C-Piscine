#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *a;
	int i;
	
	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	a = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		a[i] = min;
		min++;
		i++;
	}
	return (a);
}

int clean_stdin()//clean_stdin() is always TRUE because the function return always 1. Also, clean_stdin() will be executed only if the user enter a string containing non numeric character
{
    while (getchar() != '\n');
    return 1; 
}

int main()
{
	char c;
	int n;
	printf("Insert your inicial number: ");
	while (((scanf("%d%c", &n, &c) != 2 || c != '\n') && clean_stdin()));//This means expecting from the user input an integer and close to it a non numeric character.
	int m;
	printf("\nInsert your last number: ");
	while (((scanf("%d%c", &m, &c) != 2 || c != '\n') && clean_stdin()));//This means expecting from the user input an integer and close to it a non numeric character.
	int *a = ft_range(n, m);
	int i = 0;
	printf("\nThe range between %d (included) and %d (excluded) is:\n\n", n, m);
	while (i < (m - n))
	{
		printf("%d ", a[i]);
		i++;
	}
	return (0);
}