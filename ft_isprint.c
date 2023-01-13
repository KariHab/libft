/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khabbout <khabbout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 10:31:33 by khabbout          #+#    #+#             */
/*   Updated: 2023/01/12 19:41:32 by khabbout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (c);
	return (0);
}

/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_isprint('2'));
	printf("%d\n", ft_isprint('a'));
	printf("%d\n", ft_isprint('\b'));
	printf("%d\n", ft_isprint(' '));
	printf("%d\n", ft_isprint('\t'));
}
*/