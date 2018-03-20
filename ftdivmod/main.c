void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int remainder;
	int result;

	remainder = a % b;
	result = a / b;
	div = &result;
	mod = &remainder;
}