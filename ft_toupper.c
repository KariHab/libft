/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khabbout <khabbout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 10:31:55 by khabbout          #+#    #+#             */
/*   Updated: 2023/01/12 20:23:50 by khabbout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/*
#include <stdio.h>
#include <ctype.h>

int main ()
{
	int c = 'A';
	int d = 'c';
	printf("%c\n", (ft_toupper(c)));
	printf("%c\n", toupper(c));
	printf("%c\n", ft_toupper(d));
	printf("%c\n", toupper(d));
}
*/