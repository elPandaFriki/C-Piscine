int		ft_recursive_factorial(int nb)
{
	if (nb == 1)
		return (1);
	if (nb > 1)
	{
		nb = nb * (nb - 1);
		nb--;
		ft_iterative_factorial(nb);
	}
	return (0);
}