/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 10:56:30 by kwang             #+#    #+#             */
/*   Updated: 2021/05/21 20:01:42 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <errno.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (size * nmemb / nmemb != size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (ptr);
	ft_memset(ptr, 0, nmemb * size);
	return (ptr);
}
