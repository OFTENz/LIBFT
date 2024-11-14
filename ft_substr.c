/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mir <sel-mir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:36:57 by sel-mir           #+#    #+#             */
/*   Updated: 2024/11/11 09:31:52 by sel-mir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	a;

	a = 0;
	p = NULL;
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(&s[start]) < len)
		p = malloc(sizeof(char) * (ft_strlen(&s[start]) + 1));
	else
		p = malloc(sizeof(char) * (len + 1));
	if (p == NULL)
		return (NULL);
	while (a < len && s[start])
		p[a++] = s[start++];
	p[a] = '\0';
	return (p);
}
