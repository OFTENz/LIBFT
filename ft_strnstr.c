/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mir <sel-mir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:43:01 by sel-mir           #+#    #+#             */
/*   Updated: 2024/11/06 21:58:05 by sel-mir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isquall(char c, char d)
{
	return (c == d || c == d - 32 || c == d + 32);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	size_t	b;

	if ((!haystack || !needle) && len == 0)
		return ((char *)haystack);
	if (*needle == '\0')
		return ((char *)haystack);
	a = 0;
	while (haystack[a] && a < len)
	{
		b = 0;
		while (needle[b] && haystack[a + b] && a + b < len)
		{
			if (!ft_isquall(haystack[a + b], needle[b]))
				break ;
			b++;
		}
		if (!needle[b])
			return ((char *)&haystack[a]);
		a++;
	}
	return (NULL);
}
