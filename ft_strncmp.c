/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:34:54 by            #+#    #+#             */
/*   Updated: 2024/11/03 02:10:01 by           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	a;

	a = 0;
	while (a < n && s1[a] && s2[a])
	{
		if (s1[a] - s2[a] != 0)
			return ((unsigned char)s1[a] - (unsigned char)s2[a]);
		a++;
	}
	if (a < n)
		return ((unsigned char)s1[a] - (unsigned char)s2[a]);
	return (0);
}
