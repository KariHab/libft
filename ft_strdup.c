#include <stdlib.h>

char	*ft_strdup(char *s)
{
	int	i;
	int	len;
	char	*copy;

	len = 0;
	while (s[len])
		len++;
	copy = malloc (len + 1);
	if (copy != NULL)
	{
		i = 0;
		while (s[i])
		{
			copy[i] = s[i];
			i++;
		}
		copy[i] = '\0';
	}
	return (copy);
}
