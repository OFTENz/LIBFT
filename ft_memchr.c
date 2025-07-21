/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:46:25 by            #+#    #+#             */
/*   Updated: 2024/11/04 18:18:44 by           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			a;
	unsigned char	*p;

	c = (unsigned char)c;
	p = (unsigned char *)s;
	a = 0;
	while (a < n)
	{
		if (p[a] == c)
			return ((void *)&s[a]);
		a++;
	}
	return (NULL);
}
