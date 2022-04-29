/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 15:10:24 by pfrances          #+#    #+#             */
/*   Updated: 2022/04/29 13:15:08 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest_bytes;
	unsigned char	*src_bytes;

	if (dest == src)
		return (dest);
	if (dest < src || (size_t)(dest - src) > n)
		return (ft_memcpy(dest, src, n));
	else
	{
		dest_bytes = (unsigned char *)dest;
		src_bytes = (unsigned char *)src;
		i = n;
		while (i > 0)
		{
			i--;
			if (i < n)
				dest_bytes[i] = src_bytes[i];
		}
	}
	return (dest);
}
