#include <unistd.h>
#include <stdio.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	border(int x, int y, int n, int m)
{
	while (x < n)
	{
		if (x == 0 || y == 0 || x == n - 1 || y == m - 1)
		{
			if ((x == 0 || x == n - 1) && y == 0)
			{
				if ((y == 0 && (x == n - 1 || x == 0)))
				{
					if(x == 0)
						ft_putchar('/');
					else
						ft_putchar('\\');
				}
			}	
			else
			{
				if (y == m - 1 && (x == 0 || x == n - 1))
				{
					if (x == 0)
						ft_putchar('\\');
					else
						ft_putchar('/');
				}
				else
				{
					if(x == 0 || x == n - 1)
						ft_putchar('*');
					else
						ft_putchar('*');
				}	
			}
		}
		else
			ft_putchar(' ');
		x++;
	}
}

void	rush02(int n, int m)
{
	int x;
	int y;

	y = 0;
	if (n == 1 && m == 1)
	{
		ft_putchar('/');
		ft_putchar('\n');
	}
	else
	{
		while (y < m)
		{
			x = 0;
			border(x, y, n, m);
			ft_putchar('\n');
			y++;
		}
	}
}

int clean_stdin()//clean_stdin() is always TRUE because the function return always 1. Also, clean_stdin() will be executed only if the user enter a string containing non numeric character
{
    while (getchar() != '\n');
    return 1;
}

int main(void)  
{  
    int a;  
    int i;
    char c;
    
    a = 0;
    i = 0;  
    do
    {  
      printf("\nEnter the width: ");
    }
    while (((scanf("%d%c", &i, &c) != 2 || c != '\n') && clean_stdin()));//This expects from the user to input an integer and close it to a non-numeric character.
    do
    {  
      printf("\nEnter the height: ");
    }
    while (((scanf("%d%c", &a, &c) != 2 || c != '\n') && clean_stdin()));
    printf("\nEnjoy your square!\n\n");
	rush02(i, a);
	return (0);
}