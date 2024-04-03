/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhittlov <mhittlov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 02:04:32 by mhittlov          #+#    #+#             */
/*   Updated: 2023/10/22 02:17:19 by mhittlov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *haystack, char const *needle, size_t n)
{
	size_t	b;

	if (!*needle)
		return ((char *)haystack);
	while (*haystack && n--)
	{
		b = 0;
		while (*(haystack + b) == *(needle + b)
			&& *(needle + b) && b <= n)
		{
			if (!*(needle + b + 1))
				return ((char *)haystack);
			b++;
		}
		haystack++;
	}
	return (NULL);
}
