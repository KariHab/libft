/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khabbout <khabbout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 09:08:37 by khabbout          #+#    #+#             */
/*   Updated: 2023/01/10 09:08:37 by khabbout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;

    if (src == NULL || dest == NULL)
        return (NULL);
    i = 0;
    while (i < n)
    {
        ((char *)dest)[i] = ((char *)src)[i];
        i++;
    }
    return (dest);
}

#include <stdio.h>
#include <string.h>
int main()
{
    const char src[] = "Hello World!";
    char dest[20];
    memcpy(dest, src, 12);
    printf("Copied str with memcpy dest = %s\n", dest);
    ft_memcpy(dest, src, 12);
    printf("Copied str with my function: %s\n", dest);

    int src2[] = {10, 20, 30, 40, 50};
    int dest2[60];
    ft_memcpy(dest2, src2, sizeof (src2));
    printf("Copied array of int is: ");
    int i = 0;
    while (i < 5)
    {
        printf("%d ", dest2[i]);
        i++;
    }
}