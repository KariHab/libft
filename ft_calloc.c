/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khabbout <khabbout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:02:47 by khabbout          #+#    #+#             */
/*   Updated: 2023/01/10 13:02:49 by khabbout         ###   ########.fr       */
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

void    *ft_calloc(size_t nelem, size_t elsize)
{
    void *ptr;

    ptr = malloc (nelem * elsize);
    if (ptr == NULL)
        return (ptr);

    ft_bzero(ptr, nelem * elsize);
    return(ptr);
}
