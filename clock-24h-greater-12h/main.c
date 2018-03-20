#include <stdio.h>
#include <unistd.h>

void	ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour == 0)
		printf("12.00 A.M. and 01.00 A.M.\n");
	else if (hour == 11)
		printf("11.00 A.M. and 12.00 P.M.\n");
	else if (hour == 12)
		printf("12.00 P.M. and 01.00 P.M.\n");
	else if (hour == 23)
		printf("11.00 P.M. and 12.00 A.M.\n");
	else
	{
		if (hour / 12 == 0)
			printf("%.2d.00 A.M. and %.2d.00 A.M.\n", hour % 12, hour % 12 + 1);
		else
			printf("%.2d.00 P.M. and %.2d.00 P.M.\n", hour % 12, hour % 12 + 1);
	}
}

int clean_stdin()//clean_stdin() is always TRUE because the function return always 1. Also, clean_stdin() will be executed only if the user enter a string containing non numeric character
{
    while (getchar() != '\n');
    return 1;
}

int main()
{
	int i;
	char c;

	printf("What time is it? ");
	while (((scanf("%d%c", &i, &c) != 2 || c != '\n') && clean_stdin()));//This means expecting from the user input an integer and close to it a non numeric character.
	printf("\n");
	ft_takes_place(i);
	return(0);
}