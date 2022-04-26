/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 15:10:24 by pfrances          #+#    #+#             */
/*   Updated: 2022/04/25 18:17:39 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dest_bytes;
	char	*src_bytes;

	if (dest == src)
		return (dest);
	if (dest < src || (size_t)(dest - src) > n)
		return (ft_memcpy(dest, src, n));
	else
	{
		dest_bytes = (char *)dest;
		src_bytes = (char *)src;
		i = n - 1;
		while (i > 0)
		{
			if (i < n)
				dest_bytes[i] = src_bytes[i];
			i--;
		}
		if (i == 0)
			dest_bytes[i] = src_bytes[i];
	}
	return (dest);
}
