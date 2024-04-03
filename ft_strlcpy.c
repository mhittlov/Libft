/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhittlov <mhittlov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 21:07:01 by mhittlov          #+#    #+#             */
/*   Updated: 2023/11/04 21:07:07 by mhittlov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char const *src, size_t n)
{
	size_t	a;

	a = 0;
	while (*(src + a))
		a++;
	if (!n)
		return (a);
	while (--n && *src)
		*dest++ = *src++;
	*dest = '\0';
	return (a);
}
