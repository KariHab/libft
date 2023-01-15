/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khabbout <khabbout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 10:31:23 by khabbout          #+#    #+#             */
/*   Updated: 2023/01/13 20:16:18 by khabbout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_isascii(' '));
	printf("%d\n", ft_isascii('2'));
	printf("%d\n", ft_isascii(2));
	printf("%d\n", ft_isascii('a'));
}*/
