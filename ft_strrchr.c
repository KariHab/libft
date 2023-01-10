/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khabbout <khabbout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 09:09:23 by khabbout          #+#    #+#             */
/*   Updated: 2023/01/10 09:09:23 by khabbout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}

char    *ft_strrchr(const char *s, int c)
{
    int i;

    i = ft_strlen(s);

    if (s == NULL)
        return (NULL);

    while (i >= 0)
    {
        if (((char *)s)[i] == (char)c)
            return (((char *)s) + i);
        i--;

    }
    return (NULL);
}


#include <string.h>
#include <stdio.h>

int main ()
{
    char str [] = "AaHelloa";
    printf("%s", ft_strrchr(str, 'H'));
    printf("\n%s", strrchr(str, 'H'));

}
