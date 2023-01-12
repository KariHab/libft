


#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}

void ft_putstr_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	write(fd, s, ft_strlen(s));
}


/* 
precedent fonction améliorée
void	ft_putstr(char *str)
{

	if (*str != '\0')
		write(1, str, ft_strlen(str));
}
*/
int main()
{
    char a[] = "Hello World";
	ft_putstr_fd(a, 1);
}
