void	ft_print_comb(void)
{
	int n[3];

	n[0] = 48;
	while (n[0] < 58)
	{
		n[1] = n[0] + 1;
		while (n[1] < 58)
		{
			n[2] = n[1] + 1;
			while (n[2] < 58)
			{
				ft_putchar(n[0]);
				ft_putchar(n[1]);
				ft_putchar(n[2]);
				if (!(n[0] == 55 && n[1] == 56 && n[2] == 57))
				{
					write(1, ", ", 2);
				}
				n[2]++;
			}
			n[1]++;
		}
		n[0]++;
	}
	ft_putchar('\n');
}