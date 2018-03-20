#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 1)
	{
		return (nb);
	}
	if (power > 1)
	{
		nb = nb + nb;
		power--;
		ft_recursive_power(nb, power);
	}
	return (0);
}