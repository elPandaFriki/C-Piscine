#include "../includes/evalexpr.h"

int		multiplicate_expression(char **str)
{
	int		nb1;
	int		nb2;
	char	operator;

	nb1 = parse_parenthesis(str);
	while ((*str)[0] == '*' || (*str)[0] == '/' || (*str)[0] == '%')
	{
		operator = (*str)[0];
		*str = *str + 1;
		nb2 = parse_parenthesis(str);
		nb1 = do_op(nb1, nb2, operator);
	}
	return (nb1);
}