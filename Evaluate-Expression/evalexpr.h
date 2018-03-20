#ifndef __BSQ_H
# define __BSQ_H
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <fcntl.h>
# include <stdio.h>

void	ft_putchar(char c);
int	ft_strlen(char *str);
void	ft_putnbr(int nb);
int	ft_atoi(char *str);
int	do_op(int nb1, int nb2, char operator);
int		multiplicate_expression(char **str);
int		parse_parenthesis(char **str);
int		primary_expression(char **str);
char	*remove_whitespaces(char *str);
int		eval_expr(char *str);

#endif