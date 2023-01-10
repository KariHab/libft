/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khabbout <khabbout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 09:09:17 by khabbout          #+#    #+#             */
/*   Updated: 2023/01/10 09:09:17 by khabbout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    if (haystack == NULL || needle == NULL)
        return (NULL);
    
    i = 0;
    j = 0;

	if (needle[j] == '\0')
	{
		return ((char *)haystack);
	}
	while (haystack[i] != '\0' && i < len)
	{
		while (haystack[i + j] == needle[j] && haystack[i + j] != '\0')
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return ((char *)haystack+ i);
		}
		i++;
		j = 0;
	}
	return (NULL);
}

#include <string.h>
#include <stdio.h>
int main ()
{
	char str[] = "Je suis Karima et j'aime le code";
	char find[] = "suis";

    printf("%s\n", strnstr(str, find, 20));
	printf("%s\n", ft_strnstr(str, find, 20));
	
}
