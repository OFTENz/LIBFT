/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mir <sel-mir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:19:59 by sel-mir           #+#    #+#             */
/*   Updated: 2024/11/03 18:09:47 by sel-mir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dst, const	char *src, size_t dstsize)
{
	size_t		i;
	size_t		d_len;
	size_t		s_len;
	size_t		avaibility;

	if ((!dst || !src) && dstsize == 0)
		return (ft_strlen(src));
	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	i = 0;
	if (dstsize <= d_len)
		return (dstsize + s_len);
	avaibility = dstsize - d_len - 1;
	while (src[i] && avaibility > i)
	{
		dst[d_len + i] = src[i];
		i++;
	}
	dst [d_len + i] = '\0';
	return (d_len + s_len);
}
