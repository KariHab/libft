#include <unistd.h>

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t i;
    i = 0;
    if (src == NULL || dst == NULL)
        return (NULL);
    
    if (dst > src)
        while (len > 0)
        {
            ((char *)dst)[len] = ((char *)src)[len];
            len--;
        } 
    else
        while (i < len)
        {
            ((char *)dst)[i] = ((char *)src)[i];
            i++;
        }
    return(dst);
}

#include <stdio.h>
#include <string.h>

int main() 
{ 
    char src[] = "Bonjour";
    char dest[4]; 
    ft_memmove(dest, src, 4); 
    printf("%s", dest);
    memmove(dest, src, 4);
    printf("\n%s", dest);

    int src2[] = {10, 20, 30, 40, 50};
    int dest2[60];
    ft_memmove(dest2, src2, 12);
    printf("\nCopied array of int is: ");
    int i = 0;
    while (i < 3)
    {
        printf("%d ", dest2[i]);
        i++;
    }
    memmove(dest2, src2, 12);
    printf("\nCopied array of int with memmove: ");
    i = 0;
    while (i < 3)
    {
        printf("%d ", dest2[i]);
        i++;
    }
} 