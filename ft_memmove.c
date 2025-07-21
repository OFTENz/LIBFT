/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:42:07 by            #+#    #+#             */
/*   Updated: 2024/11/04 17:39:18 by           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*d;
	const char	*s;

	if (!dst && !src)
		return (NULL);
	d = (char *)dst;
	s = (const char *)src;
	if (len == 0 || dst == src)
		return (dst);
	if (s < d && d < s + len)
	{
		i = len;
		while (i-- > 0)
			d[i] = s[i];
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
