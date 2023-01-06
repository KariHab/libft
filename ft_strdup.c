/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khabbout <khabbout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 10:31:37 by khabbout          #+#    #+#             */
/*   Updated: 2023/01/06 10:32:26 by khabbout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *s)
{
	int	i;
	int	len;
	char	*copy;

	len = 0;
	while (s[len])
		len++;
	copy = malloc (len + 1);
	if (copy != NULL)
	{
		i = 0;
		while (s[i])
		{
			copy[i] = s[i];
			i++;
		}
		copy[i] = '\0';
	}
	return (copy);
}
