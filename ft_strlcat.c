/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khabbout <khabbout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 09:08:58 by khabbout          #+#    #+#             */
/*   Updated: 2023/01/10 09:08:58 by khabbout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

size_t	ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

    j = ft_strlen(dst);
	i = 0;
    if (dst == NULL || src == NULL)
		return (0);

	if (dstsize <= j)
        return (ft_strlen(src) + dstsize);

	while (src[i] && j + i < (dstsize -1))
		{
			dst[j + i] = src[i];
			i++;
		}
		dst[j + i] = '\0';
	return (j + ft_strlen(src));
}

#include <stdio.h>

int main ()
{
	char src [] = "Hello";
	char dest [] = "Truc";
	ft_strlcat(dest, src, 8);
	printf("Copied array is: %s", dest);
}