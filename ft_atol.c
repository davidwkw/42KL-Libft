/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 17:14:46 by kwang             #+#    #+#             */
/*   Updated: 2024/01/12 21:20:53 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static int	ft_isws(char c)
{
	return ((c >= 9 && c <= 13) || c == ' ');
}

long	ft_atol(const char *str)
{
	int				sign;
	long long		res;
	unsigned int	i;

	i = 0;
	sign = 1;
	res = 0;
	while (ft_isws(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		res = res * 10 + str[i++] - '0';
		if (res * sign > LONG_MAX)
			return LONG_MAX;
		else if (res * sign < LONG_MIN)
			return LONG_MIN;
	}
	return (res * sign);
}
