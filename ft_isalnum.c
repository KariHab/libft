/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khabbout <khabbout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 10:31:16 by khabbout          #+#    #+#             */
/*   Updated: 2023/01/06 12:44:39 by khabbout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (c);
	return (0);
}

/*
#include <stdio.h>
int main ()
{
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", ft_isalnum('9'));
	printf("%d\n", ft_isalnum('.'));
	printf("%d\n", ft_isalnum(' '));
}
*/