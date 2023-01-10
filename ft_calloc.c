/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khabbout <khabbout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:02:47 by khabbout          #+#    #+#             */
/*   Updated: 2023/01/10 14:29:52 by khabbout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <unistd.h>
#include <stdlib.h>

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

void    *ft_calloc(size_t count, size_t size)
{
    void *ptr;

    ptr = malloc (count * size);
    if (ptr == NULL)
        return (ptr);

    ft_bzero(ptr, count * size);
    return(ptr);
}
