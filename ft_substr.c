/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khabbout <khabbout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:43:48 by khabbout          #+#    #+#             */
/*   Updated: 2023/01/12 14:43:48 by khabbout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (s == NULL)
		return (NULL);
	str = ft_calloc(len * sizeof(char) + 1, 1);
	if (str == NULL)
		return (NULL);
	while (start < ft_strlen(s) && i < len && s[i])
	{
		str[i] = s[i + start];
		i++;
	}
	return (str);
}

// int main()
// {
// 	char str[] = "Manger des pommes dans la vie";

// 	char *newstr = ft_substr(str, 0, -1);
// 	printf("%s\n",  newstr);
// }