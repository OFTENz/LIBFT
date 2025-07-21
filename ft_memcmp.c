/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:15:10 by            #+#    #+#             */
/*   Updated: 2024/11/07 17:51:44 by           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	a;
	char	*s;
	char	*d;

	s = (char *)s1;
	d = (char *)s2;
	a = 0;
	while (a < n)
	{
		if ((unsigned char)s[a] != (unsigned char)d[a])
			return ((unsigned char)s[a] - (unsigned char)d[a]);
		a++;
	}
	return (0);
}
