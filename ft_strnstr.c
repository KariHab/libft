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

char    *ft_strnstr(const char *s1, const char *s2, size_t n)
{
    size_t i;
    size_t j;

    if (s1 == NULL || s2 == NULL)
        return (NULL);
    
    i = 0;
    j = 0;

	if (s2[j] == '\0')
	{
		return ((char *)s1);
	}
	while (s1[i] != '\0' && i < n)
	{
		while (s1[i + j] == s2[j] && s1[i + j] != '\0')
		{
			j++;
		}
		if (s2[j] == '\0')
		{
			return ((char *)s1+ i);
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
	char find[] = "\0";

    printf("%s\n", strnstr(str, find, 20));
	printf("%s\n", ft_strnstr(str, find, 20));
	
}
