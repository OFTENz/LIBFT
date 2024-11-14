/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mir <sel-mir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:42:29 by sel-mir           #+#    #+#             */
/*   Updated: 2024/11/06 21:54:39 by sel-mir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			a;
	unsigned char	cc;
	unsigned char	*ptr;

	cc = (unsigned char)c;
	a = 0;
	ptr = (unsigned char *)b;
	while (a < len)
	{
		ptr[a] = cc;
		a++;
	}
	return (b);
}
