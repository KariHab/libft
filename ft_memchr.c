/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khabbout <khabbout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 09:08:21 by khabbout          #+#    #+#             */
/*   Updated: 2023/01/10 09:08:21 by khabbout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((unsigned char *)s + i);
		i++;
	}
	return (NULL);
}

/*
#include <string.h>
int main()
{
	char str[] = "Hello";
	char *ptr = memchr(str, 'e', 5);
	printf("After memchr: %s\n", ptr);
	char *ptr2 = ft_memchr(str, 'e', 5);
	printf("After my function: %s\n", ptr2);
}
*/