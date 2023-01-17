/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khabbout <khabbout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:07:21 by khabbout          #+#    #+#             */
/*   Updated: 2023/01/12 15:07:21 by khabbout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_pos(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

static char *ft_strrev(char *str)
{
	int i;
	int len;
	int tmp;

	i = 0;
	len = ft_strlen(str) - 1;
	while (len > i)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return (str);
}

char *ft_itoa(int nbr)
{
	int i;
	int negative;
	char *tmp;

	i = 0;
	negative = (nbr < 0);
	if ((tmp = ft_calloc(11 + negative, (sizeof(char)))) == NULL)
		return (NULL);
	if (nbr == 0)
		tmp[i] = '0';
	while (nbr)
	{
		tmp[i++] = ft_pos(nbr % 10) + '0';
		nbr = (nbr / 10);
	}
	if (negative)
		tmp[i] = '-';
	return (ft_strrev(tmp));
}

int main()
{
	int i = 0;
	int tab[5] = {-2147483648, -42, 0, 42, 2147483647};

	while (i < 5)
		printf("%s\n", ft_itoa(tab[i++]));
}
