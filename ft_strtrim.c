/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhittlov <mhittlov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:20:36 by mhittlov          #+#    #+#             */
/*   Updated: 2023/11/04 20:59:38 by mhittlov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	char_check(char const *str, char const c)
{
	size_t	t;

	if (!str)
		return (0);
	t = 0;
	while (*(str + t))
	{
		if (*(str + t) == c)
			return (1);
		t++;
	}
	return (0);
}

static size_t	str_len(char const *str)
{
	size_t	t;

	t = 0;
	while (*(str + t))
		t++;
	return (t);
}

static char	*str_new(size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	start;
	size_t	end;
	size_t	t;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (*(s1 + start) && char_check(set, *(s1 + start)))
		start++;
	end = str_len(s1);
	while (end > start && char_check(set, *(s1 + (end - 1))))
		end--;
	trim = str_new(end - start);
	if (!trim)
		return (NULL);
	t = 0;
	while ((start + t) < end)
	{
		*(trim + t) = *(s1 + (start + t));
		t++;
	}
	*(trim + t) = '\0';
	return (trim);
}
