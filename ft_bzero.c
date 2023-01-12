/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khabbout <khabbout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 09:08:07 by khabbout          #+#    #+#             */
/*   Updated: 2023/01/10 09:08:07 by khabbout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    size_t  i;

    if(s == NULL)
        return ;

    i = 0;
    while (i < n)
    {
        ((char *)s)[i] = 0;
        i++;
    }
}

int main()
{
    char str[] = "Hello";
    ft_bzero(str, 1);
    int j = 0;
    while (j < 5)
    {
        printf("%c", str[j]);
        j++;
    }
    printf("\n");
    int s[] = {1,2,3,4,5,6,7,8};
    ft_bzero(s, 24);
    int i = 0;
    while (i < 8)
    {
        printf("%d\n", s[i]);
        i++;
    } 
}