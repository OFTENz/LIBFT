/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mir <sel-mir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 23:11:44 by sel-mir           #+#    #+#             */
/*   Updated: 2024/11/03 16:31:51 by sel-mir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	a;

	a = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[a] != '\0' && a < dstsize - 1)
	{
		dst[a] = src[a];
		a++;
	}
	dst[a] = '\0';
	return (ft_strlen(src));
}
