/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khabbout <khabbout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:20:15 by khabbout          #+#    #+#             */
/*   Updated: 2023/01/12 15:20:15 by khabbout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char **p)
{
	int	i;

	i = 0;
	while (p[i])
	{
		free(p[i]);
		i++;
	}
	free(p);
}

static int	count_word(const char *s, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			counter++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (counter);
}

static char	*ft_memory(const char *str, char c)
{
	size_t	i;
	char	*newstr;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	newstr = ft_calloc(i + 1, sizeof(char));
	if (newstr == NULL)
		return (NULL);
	while (i--)
		newstr[i] = str[i];
	return (newstr);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	word;

	i = 0;
	word = 0;
	if (s == NULL)
		return (NULL);
	tab = (char **)ft_calloc(count_word(s, c) + 1, sizeof(char *));
	if (tab == NULL)
		return (NULL);
	while (count_word(s + i, c))
	{
		while (s[i] && s[i] == c)
			i++;
		tab[word] = ft_memory(s + i, c);
		if (tab[word++] == NULL)
			return(ft_free(tab), NULL);
		while (s[i] && s[i] != c)
			i++;
	}
	return (tab);
}


// int main ()
// {
//     char s[] = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
// 	char *tab = *ft_split(s, 32);

// 	while (tab)
// 	{
// 		printf("%s\n", tab);
// 		tab = *ft_split(NULL, 32);
// 	}
// }