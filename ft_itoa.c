/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mir <sel-mir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:13:21 by sel-mir           #+#    #+#             */
/*   Updated: 2024/11/03 01:50:18 by sel-mir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int c)
{
	int	a;

	a = 0;
	if (c <= 0)
		a = 1;
	while (c)
	{
		c /= 10;
		a++;
	}
	return (a);
}

char	*ft_itoa(int n)
{
	char	*p;
	int		cnt;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	(1) && (cnt = ft_count(n), p = malloc(cnt + 1));
	if (!p)
		return (NULL);
	p[cnt] = '\0';
	if (n < 0)
	{
		p[0] = '-';
		n *= -1;
	}
	else if (!n)
	{
		p[0] = '0';
		return (p);
	}
	while (n)
	{
		p[--cnt] = (n % 10) + 48;
		n = (n / 10);
	}
	return (p);
}
