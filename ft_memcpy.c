/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:47:59 by            #+#    #+#             */
/*   Updated: 2024/11/09 14:11:15 by           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	a;
	char	*d;
	char	*s;

	if ((!dst && !src) || n == 0)
		return (dst);
	d = (char *)dst;
	s = (char *)src;
	a = 0;
	if (dst != src)
	{
		while (a < n)
		{
			d[a] = s[a];
			a++;
		}
	}
	return (dst);
}
