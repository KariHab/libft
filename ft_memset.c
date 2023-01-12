/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khabbout <khabbout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 13:59:24 by khabbout          #+#    #+#             */
/*   Updated: 2023/01/06 15:53:34 by khabbout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    size_t  i;
  
    if (b == NULL)
        return (NULL);

    i = 0;
    while (i < len)
    {
        ((unsigned char *)b)[i] = c;
        i++;
    }
    return (b);
}

int main()
{
    char str[] = "Hello";
    printf("Normal String = %s\n", str);
    memset(str, '!', 2);
    printf("Str after memset = %s\n", str);
    ft_memset(str, '!', 2);
    printf("Str after my function memset = %s\n", str);

    int s[] = {1,2,3,4,5,6,7,8};
    int i = 0;
    memset(s, 1 , 4);
    printf("Avec la fonction :\n");
    while (i < 8)
    {
        printf("%d\n", s[i]);
        i++;
    }
    i = 0;
    ft_memset(s, 1, 4);
    printf("With my function: \n");
    while (i < 8)
    {
        printf("%d\n", s[i]);
        i++;
    }  
}