/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khabbout <khabbout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 09:09:09 by khabbout          #+#    #+#             */
/*   Updated: 2023/01/10 09:09:09 by khabbout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

    if (s1 == NULL || s2 == NULL || n == 0)
        return (0);

    i = 0;
	while ((s1[i] && s2[i]) && i < n -1)
    {
        if (s1[i] > s2[i])
            return (1);
        else if ((s1[i] < s2[i]))
            return(-1);
        i++;
    }
    return (0);
    
}


#include <string.h>
#include <stdio.h>

int main ()
{
    char s1[] = "\0";
    char s2[] = "abc";
    char s3[] = "Hella";
    char s4[] = "Hello";
    printf("%d\n", ft_strncmp(s1, s2, 4));
    printf("%d\n", strncmp(s1, s2, 4));

    printf("%d\n", ft_strncmp(s1, s3, 8));
    printf("%d\n", strncmp(s1, s3, 8));

    printf("%d\n", ft_strncmp(s1, s4, 8));
    printf("%d\n", strncmp(s1, s4, 8));
}