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

#include <unistd.h>

void    *ft_memset(void *b, int c, size_t len)
{
    size_t  i;
    unsigned char *d;

    i = 0;
    d = (unsigned char *)b;

    while (i < len)
    {
        d[i] = c;

    }
    return (b);

}


#include <string.h>
#include <stdio.h>

int main()
{
    char str[] = "Hello";
    printf("%s\n", ft_memset(str, '$', 2));
    printf("%s\n", memset(str, '$', 2));
}