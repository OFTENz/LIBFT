/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mir <sel-mir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 01:35:31 by sel-mir           #+#    #+#             */
/*   Updated: 2024/11/03 16:31:20 by sel-mir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*p;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			p = (char *)&s[i];
			return (p);
		}
		i++;
	}
	if (s[i] == (char)c)
	{
		p = (char *)&s[i];
		return (p);
	}
	return (NULL);
}
