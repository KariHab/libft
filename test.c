#include "libft.h"


//trouver le char delimiteur 
static int separator(char c, const char *set)
{
    size_t i;

    i = 0;
    while (set[i])
    {
        if (set[i] == c)
            return(1);
        i++;
    }
    return(0);
}

//count the number of words qu'on a dans notre str en fonction du delimiteur
int	count_words(char *str, char *set)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
    if(str == NULL || set == NULL)
        return(NULL);
	while (str[i])
	{
		while (str[i] && separator(str[i], set)) // tant que on a p
			i++;
		if (str[i])
			count++;
		while (str[i] && (separator(str[i], set) == 0))
			i++;
	}
	return (count);
}

//pour avoir la taille des str entre les delimiteur 
// tant que tu as pas trouve le delimiteur increment pour la longueur 
int	ft_strlen_sep(char *str, char *set)
{
	int	i;

	i = 0;
	while (str[i] && is_in_set(str[i], set) == 0)
		i++;
	return (i);
}

//pour stocker les mots entre chaque delimiteur 
char	*ft_word(char *str, char *set)
{
	int		len;
	int		i;
	char	*word;

	i = 0;
	len = ft_strlen_sep(str, set);
	word = (char *)malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *set)
{
	char	**strings;
	int		i;

	i = 0;
	strings = (char **)malloc(sizeof(char *) * (count_words(str, set) + 1));
	while (*str)
	{
		while (*str  && is_in_set(*str, set))
			str++;
		if (*str)
		{
			strings[i] = ft_word(str, set);
			i++;
		}
		while (*str && is_in_set(*str, set) == 0)
			str++;
	}
	strings[i] = 0;
	return (strings);
}

//free la memoire appres

int main()
{

}