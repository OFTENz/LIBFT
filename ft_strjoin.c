/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:17:28 by            #+#    #+#             */
/*   Updated: 2024/11/03 17:24:16 by           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	int		a;

	a = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (*s1 == '\0')
	{
		p = malloc(sizeof(char) * ft_strlen(s2) + 1);
		if (p == NULL)
			return (NULL);
		ft_strlcpy((char *)p, (char *)s2, ft_strlen(s2) + 1);
		return (p);
	}
	p = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (p == NULL)
		return (NULL);
	ft_strlcpy(p, s1, ft_strlen(s1) + 1);
	ft_strlcpy(&p[ft_strlen(s1)], s2, ft_strlen(s2) + 1);
	return (p);
}
