/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mir <sel-mir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:01:31 by sel-mir           #+#    #+#             */
/*   Updated: 2024/11/03 02:03:40 by sel-mir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char	*p;
	size_t	a;

	a = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	p = malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (p == NULL)
		return (NULL);
	p[ft_strlen((char *)s)] = '\0';
	while (s[a])
	{
		p[a] = f(a, s[a]);
		a++;
	}
	return (p);
}
