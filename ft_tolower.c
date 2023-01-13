/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khabbout <khabbout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 10:31:49 by khabbout          #+#    #+#             */
/*   Updated: 2023/01/12 20:23:22 by khabbout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/*
#include <stdio.h>
#include <ctype.h>

int main ()
{
	int c = 'A';
	int d = 'c';
	printf("%c\n", (ft_tolower(c)));
	printf("%c\n", tolower(c));
	printf("%c\n", ft_tolower(d));
	printf("%c\n", tolower(d));
}
*/