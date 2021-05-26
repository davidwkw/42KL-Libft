/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 19:40:35 by kwang             #+#    #+#             */
/*   Updated: 2021/05/21 12:33:48 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	str_len;

	str_len = ft_strlen(s);
	if (c == 0)
		return ((char *)s + str_len);
	while (str_len >= 0)
	{
		if (s[str_len] == (char)c)
			return ((char *)s + str_len);
		str_len--;
	}
	return (NULL);
}
