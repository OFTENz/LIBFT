/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mir <sel-mir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 08:13:42 by sel-mir           #+#    #+#             */
/*   Updated: 2024/11/03 02:38:51 by sel-mir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_findchar(char *str, char c)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (str[a] == c)
			return (1);
		a++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		a;
	int		e;
	char	*p;
	int		i;

	i = 0;
	a = 0;
	if (!s1 || !set)
		return ((char *)s1);
	e = ft_strlen(s1);
	while (s1[a] && ft_findchar((char *)set, s1[a]))
		a++;
	while (a < e && ft_findchar((char *)set, s1[e - 1]))
		e--;
	p = malloc(sizeof(char) * (e - a + 1));
	if (p == NULL)
		return (NULL);
	while (a < e)
	{
		p[i] = s1[a];
		i++;
		a++;
	}
	p[i] = '\0';
	return (p);
}
