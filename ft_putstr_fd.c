/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khabbout <khabbout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:31:17 by khabbout          #+#    #+#             */
/*   Updated: 2023/01/12 15:31:17 by khabbout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
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
/*
int main()
{
	char a[] = "Hello World";
	ft_putstr_fd(a, 1);
}
*/