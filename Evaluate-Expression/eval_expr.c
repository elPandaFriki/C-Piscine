int		eval_expr(char *str)
{
	str = remove_whitespaces(str);
	if (str[0] == '\0')
		return (0);
	return (primary_expression(&str));
}