void	ft_print_comb2(void)
{
	int n[4];

	n[0] = 48;
	while (n[0] < 58)
	{
		n[1] = 48;
		while (n[1] < 57)
		{
			n[2] = 48;
			while (n[2] < 58)
			{
				n[3] = 49;
				while (n[3] < 58)
				{
					ft_putchar(n[0]);
					ft_putchar(n[1]);
					ft_putchar(' ');
					ft_putchar(n[2]);
					ft_putchar(n[3]);
					if (!(n[0] == 57 && n[1] == 56 && n[2] == 57 && n[3] == 57))
					{
						write(1, ", ", 2);
					}
					n[3]++;
				}
				n[2]++;
			}
			n[1]++;
		}
		n[0]++;
	}
	ft_putchar('\n');
}