int ft_strlen(char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

#include <stdlib.h>
#include <stdio.h>
int main(void)
{
    char a[] = "Hello";
    printf("%d", ft_strlen(a));
    return (0);
} 
