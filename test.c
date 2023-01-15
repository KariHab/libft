/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khabbout <khabbout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 16:05:15 by khabbout          #+#    #+#             */
/*   Updated: 2023/01/14 19:14:41 by khabbout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

static void	ft_allfree(char **p)
{
	int	i;

	i = 0;
	while (p[i])
		free(p[i++]);
	free(p);
}

static int	nb_word(const char *str, char c)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
			size++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (size);
}

static char	*ft_strdup_c(const char *str, char c)
{
	size_t	i;
	char	*new;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	new = ft_calloc(i + 1, sizeof(char));
	if (!new)
		return (NULL);
	while (i--)
		new[i] = str[i];
	return (new);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	size_t	i;
	size_t	index;

	i = 0;
	index = 0;
	if (!s)
		return (NULL);
	new = (char **)ft_calloc(nb_word(s, c) + 1, sizeof(char *));
	if (!new)
		return (NULL);
	while (nb_word(s + i, c))
	{
		while (s[i] && s[i] == c)
			i++;
		new[index] = ft_strdup_c(s + i, c);
		if (!new[index++])
			return (ft_allfree(new), NULL);
		while (s[i] && s[i] != c)
			i++;
	}
	return (new);
}

int main ()
{
    char s[] = "Manger des pommes c'est cool";
    printf(" %d", count_word(s, 32));
    
}


