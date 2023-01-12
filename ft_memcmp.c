/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khabbout <khabbout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 09:08:29 by khabbout          #+#    #+#             */
/*   Updated: 2023/01/10 09:08:29 by khabbout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t	i;

	i = 0;
	if (s1 == NULL || s2 == NULL || n == 0)
		return (0);
	while (i < n -1 && (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i]))
		i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}

int main ()
{
    char s1[] = "Hello";
    char s2[] = "abc";
    char s3[] = "Hella";
    char s4[] = "Hello";
    printf("%d\n", ft_memcmp(s1, s2, 4));
    printf("%d\n", memcmp(s1, s2, 4));

    printf("%d\n", ft_memcmp(s1, s3, 8));
    printf("%d\n", memcmp(s1, s3, 8));

    printf("%d\n", ft_memcmp(s1, s4, 5));
    printf("%d\n", memcmp(s1, s4, 5));
}