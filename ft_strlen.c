/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khabbout <khabbout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 10:31:45 by khabbout          #+#    #+#             */
/*   Updated: 2023/01/06 10:31:45 by khabbout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}

/*
#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	char a[] = "Hello";
	char b[] = "";
	printf("%d\n", ft_strlen(a));
	printf("%d\n", ft_strlen(b));

	return (0);
}
*/