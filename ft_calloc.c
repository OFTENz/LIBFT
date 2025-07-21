/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:06:00 by            #+#    #+#             */
/*   Updated: 2024/11/06 17:44:23 by           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void		*p;
	size_t		chk;

	chk = size * count;
	if (count && (chk / count) != size)
		return (NULL);
	p = malloc(sizeof(char) * chk);
	if (p == NULL)
	{
		return (NULL);
	}
	ft_bzero(p, size * count);
	return (p);
}
