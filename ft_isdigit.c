/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khabbout <khabbout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 10:31:28 by khabbout          #+#    #+#             */
/*   Updated: 2023/01/12 19:41:27 by khabbout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (c);
	return (0);
}

/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_isdigit('a'));
	printf("%d\n", ft_isdigit('2'));
	printf("%d\n", ft_isdigit(' '));
	printf("%d\n", ft_isdigit('3'));
}
*/