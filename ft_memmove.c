/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khabbout <khabbout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 09:08:44 by khabbout          #+#    #+#             */
/*   Updated: 2023/01/10 09:08:44 by khabbout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *)src;
	d = (char *)dst;
	i = 0;
	if (src == NULL || dst == NULL)
		return (NULL);
	if (d > s)
		while (len-- > 0)
			d[len] = s[len];
	else
		ft_memcpy(dst, src, len);
	return (dst);
}

// #include <string.h> 
// int main()
// {
// 	char src[] = "Bonjour";
// 	char dest[4];
// 	ft_memmove(dest, src, 4);
// 	printf("%s", dest);
// 	memmove(dest, src, 4);
// 	printf("\n%s", dest);

// 	int src2[] = {10, 20, 30, 40, 50};
// 	int dest2[60];
// 	ft_memmove(dest2, src2, 12);
// 	printf("\nCopied array of int is: ");
// 	int i = 0;
// 	while (i < 3)
// 	{
// 		printf("%d ", dest2[i]);
// 		i++;
// 	}
// 	memmove(dest2, src2, 12);
// 	printf("\nCopied array of int with memmove: ");
// 	i = 0;
// 	while (i < 3)
// 	{
// 		printf("%d ", dest2[i]);
// 		i++;
// 	}
// }
