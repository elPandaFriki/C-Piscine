#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	fatcat(int a)
{

	if (a == 0)
		ft_putchar('0');
	if (a == 1)
		ft_putchar('1');
	if (a == 2)
		ft_putchar('2');
	if (a == 3)
		ft_putchar('3');
	if (a == 4)
		ft_putchar('4');
	if (a == 5)
		ft_putchar('5');
	if (a == 6)
		ft_putchar('6');
	if (a == 7)
		ft_putchar('7');
	if (a == 8)
		ft_putchar('8');
	if (a == 9)
		ft_putchar('9');
}

void	division(int nb, int rem)
{
	if (nb > 9)
	{
		rem = nb % 10;
		nb = nb / 10;
		division(nb, rem);
		fatcat(rem);
	}
	else
	{
		fatcat(nb);
	}
}

void    ft_putnbr(int nb)
{
	int rem;
	
	rem = 0;
	if (nb < 0){
		ft_putchar('-');
		nb = nb * (-1);
	}
	division(nb, rem);
}

int clean_stdin()//clean_stdin() is always TRUE because the function return always 1. Also, clean_stdin() will be executed only if the user enter a string containing non numeric character
{
    while (getchar() != '\n');
    return 1;
}

int main(void)
{
	int i;
	char c;
	printf("Insert a number: ");
	while (((scanf("%d%c", &i, &c) != 2 || c != '\n') && clean_stdin()));//This means expecting from the user input an integer and close to it a non numeric character.
	printf("\n");
	ft_putnbr(i);
	ft_putchar('\n');
	return (0);
}