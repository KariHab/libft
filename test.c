#include <unistd.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;

    if (s == NULL)
        return (NULL);

    i = 0;
    while (i < n)
    {
        if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((unsigned char *)s + i);
        i++;
    }
    return (NULL);
}
#include <string.h>
#include <stdio.h>

int main()
{
    char str[] = "Hello";
    char *ptr = memchr(str, 'l', 5);
    printf("After memchr: %s\n", ptr);
    char *ptr2 = ft_memchr(str, 'l', 5);
    printf("After my function: %s\n", ptr2);
}