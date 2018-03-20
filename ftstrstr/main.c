#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	char *begin;
	char *pattern;

	while (*str != '\0')
	{
		begin = str;
		pattern = to_find;
		while (*str != '\0' && *pattern != '\0' && *str == *pattern)
		{
			str++;
			pattern++;
		}
		if (!*pattern)
			return (begin);
		str = begin + 1;
	}
	return (0);
}

int main(void)
{
	int i = 1000;
	char haystack[i];
	printf("Insert string: ");
	fgets(haystack, i, stdin);//fgets, alike scanf, let you input whitespaces. fgets(where you gonna storage, size of storage, input method: stdin is the standard)
  char needle[i];
  printf("\nInsert another string: ");
  fgets(needle, i, stdin);//fgets, alike scanf, let you input whitespaces. fgets(where you gonna storage, size of storage, input method: stdin is the standard)
  printf("\nstrstr: %s\n", strstr(haystack, needle));
	printf("ft_strstr: %s\n", ft_strstr(haystack, needle));
	return (0);
}