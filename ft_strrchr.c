#include <unistd.h>
size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}

char    *ft_strrchr(const char *s, int c)
{
    int i;

    i = ft_strlen(s);

    if (s == NULL)
        return (NULL);

    while (i >= 0)
    {
        if (((char *)s)[i] == (char)c)
            return (((char *)s) + i);
        i--;

    }
    return (NULL);
}


#include <string.h>
#include <stdio.h>

int main ()
{
    char str [] = "AaHelloa";
    printf("%s", ft_strrchr(str, 'H'));
    printf("\n%s", strrchr(str, 'H'));

}
