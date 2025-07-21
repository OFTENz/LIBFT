/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:32:17 by            #+#    #+#             */
/*   Updated: 2024/11/10 23:42:21 by           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cmplt(int sign)
{
	if (sign == -1)
		return (0);
	return (-1);
}

int	ft_atoi(const char *str)
{
	int			a;
	long long	res;
	int			sign;
	long long	d;

	sign = 1;
	res = 0;
	a = 0;
	while (str[a] == ' ' || (str[a] >= 9 && str[a] <= 13))
		a++;
	if (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			sign *= -1;
		a++;
	}
	while (str[a] <= '9' && str[a] >= '0')
	{
		d = res;
		res = res * 10 + str[a++] - 48;
		if (res / 10 != d)
			return (ft_cmplt(sign));
	}
	return (res * sign);
}
