#include "../includes/evalexpr.h"

int		parse_parenthesis(char **str)
{
	int		nbr;
	int		signe;

	nbr = 0;
	signe = 1;
	if ((*str)[0] == '+' || (*str)[0] == '-')
	{
		if ((*str)[0] == '-')
			signe = -1;
		*str = *str + 1;
	}
	if ((*str)[0] == '(')
	{
		*str = *str + 1;
		nbr = primary_expression(str);
		if ((*str)[0] == ')')
			*str = *str + 1;
		return (signe * nbr);
	}
	while ('0' <= (*str)[0] && (*str)[0] <= '9')
	{
		nbr = (nbr * 10) + (*str)[0] - '0';
		*str = *str + 1;
	}
	return (signe * nbr);
}