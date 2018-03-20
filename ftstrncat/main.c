int		ft_strlen(char *a)
{
	int i;

	i = 0;
	while (a[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, int nb)
{
	int indsrc;
	int inddest;
	int sizedest;
	int sizesrc;
	int totalsize;

	indsrc = 0;
	inddest = 0;
	sizedest = ft_strlen(dest);
	sizesrc = ft_strlen(src);
	totalsize = sizedest + sizesrc;
	if (sizedest < nb)
	{
		dest[nb] = '\0';
		return dest;
	}
	else
	{
		while (dest[inddest] != '\0')
		{
			inddest++;
			if (totalsize < nb)
			{
				while (indsrc < nb)
				{
					dest[inddest] = src[indsrc];
					indsrc++;
					inddest++;
				}
			}
			else
			{
				while (src[indsrc] != '\0')
				{
					dest[inddest] = src[indsrc];
					indsrc++;
					inddest++;
				}
			}
		}
	}
	dest[inddest] = '\0';
	return dest;
}