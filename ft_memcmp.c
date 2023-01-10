#include <unistd.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t	i;

    if (s1 == NULL || s2 == NULL || n == 0)
        return (0);

    i = 0;
	while (i < n -1)
    {
        if (((unsigned char *)s1)[i] > (((unsigned char *)s2)[i]))
            return (1);
        else if (((unsigned char *)s1)[i] < (((unsigned char *)s2)[i]))
            return(-1);
        i++;
    }
    return (0);
}

#include <string.h>
#include <stdio.h>

int main ()
{
    char s1[] = "Hello";
    char s2[] = "abc";
    char s3[] = "Hella";
    char s4[] = "Hello";
    printf("%d\n", ft_memcmp(s1, s2, 4));
    printf("%d\n", memcmp(s1, s2, 4));

    printf("%d\n", ft_memcmp(s1, s3, 8));
    printf("%d\n", memcmp(s1, s3, 8));

    printf("%d\n", ft_memcmp(s1, s4, 5));
    printf("%d\n", memcmp(s1, s4, 5));
}