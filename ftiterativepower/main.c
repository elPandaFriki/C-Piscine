int		ft_iterative_power(int nb, int power)
{
	int a;

	a = power;
	if (power < 0)
	{
		return (0);
	}
	while (power > 0)
	{
		a = a + nb;
		power--;
	}
	return (a);
}