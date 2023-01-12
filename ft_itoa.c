

#include "libft.h"


size_t	ft_strlen(const char *s)
{
	static int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static char	*ft_strrev(char *str)
{
	int i;
	int len;
	int tmp;

	i = 0;
	len = ft_strlen(str) - 1;
	while (len > i)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return (str);
}

char	*ft_itoa(int nbr)
{
	int i;
	int neg;
	char *tmp;

	i = 0;
	neg = 0;
	tmp = malloc(sizeof(char) * 12);
	if (tmp == NULL)
		return (NULL);
	if (nbr == 0)
		return ("0");
	if (nbr == -2147483648)
		return ("-2147483648");
	if (nbr < 0)
	{
		neg = 1;
		nbr *= -1;
	}
	while (nbr)
	{
		tmp[i++] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (neg)
		tmp[i] = '-';
	return ft_strrev(tmp);
}

int	main(void)
{
	int i = 0;
	int tab[5] = {-2147483648, -42, 0, 42, 2147483647};

	while (i < 5)
		printf("%s\n", ft_itoa(tab[i++]));
}