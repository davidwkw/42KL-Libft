/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 09:32:15 by kwang             #+#    #+#             */
/*   Updated: 2024/01/12 21:20:35 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <errno.h>

static int	ft_isws(char c)
{
	return ((c >= 9 && c <= 13) || c == ' ');
}

int	ft_atoi(const char *str)
{
	int				sign;
	long			res;
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
		if (res * sign > INT_MAX)
			return (INT_MAX);
		else if (res * sign < INT_MIN)
			return (INT_MIN);
	}
	return (res * sign);
}
