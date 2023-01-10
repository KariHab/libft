#include <unistd.h>

char    *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;

    if (s == NULL)
        return (NULL);

    while (s)
    {
        if (((char *)s)[i] == (char)c)
            return (((char *)s) + i);
        i++;

    }
    return (NULL);
}


#include <string.h>
#include <stdio.h>

int main ()
{
    char str [] = "AHelloa";
    printf("%s", ft_strchr(str, '\0'));
    printf("\n%s", strchr(str, '\0'));

}
