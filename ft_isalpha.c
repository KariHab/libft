/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khabbout <khabbout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 10:31:05 by khabbout          #+#    #+#             */
/*   Updated: 2023/01/12 19:41:17 by khabbout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (c);
	return (0);
}
/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_isalpha('a'));
	printf("%d\n", ft_isalpha('1'));
	printf("%d\n", ft_isalpha('.'));
	printf("%d\n", ft_isalpha('A'));
}
*/