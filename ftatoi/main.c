#include <stdio.h>

int ft_atoi(char *str)
{
	int x;
	int sign;
	
	x = 0;
	sign = 1;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str != '\0' && (*str >= '0' && *str <= '9'))
	{
		x = x * 10 + *str - '0';
		str++;
	}
	return (x * sign);
}

int main(void)
{
	char *str[100];
	printf("Insert string of numbers: ");
	scanf("%s", str);
	printf("\nstandard atoi says:	%d\n", atoi(str));
	printf("\nand my ft_atoi says:	%d\n", ft_atoi(str));
	return (0);
}