


#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    char *newstr;
    
    if (s == NULL)
        return (NULL);

    newstr = malloc (sizeof(char)*(len + 1));
    if (newstr == NULL)
        return (NULL);
    else
    {
        i = 0;
        while (s[i] && i < len)
        {
       
            newstr[i] = s[i + start];
            i++;
        }
        newstr[i] = '\0';
    }
    return (newstr);
}

int main()
{
    char str[] = "La vie c'est comme une boite de chocolat";
 
    int start = 6;
    int len = 15;

    char *newstr = ft_substr(str, start, len);
    printf("%s\n", str);
    printf("%s\n",  newstr);
}