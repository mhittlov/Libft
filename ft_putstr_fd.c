/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhittlov <mhittlov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 05:29:46 by mhittlov          #+#    #+#             */
/*   Updated: 2023/10/22 05:38:21 by mhittlov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	str_len(char *str)
{
	size_t	a;

	a = 0;
	while (*(str + a))
		a++;
	return (a);
}

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
	{
		write(fd, s, str_len(s));
	}
}
