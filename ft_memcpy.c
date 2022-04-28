/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 10:51:03 by pfrances          #+#    #+#             */
/*   Updated: 2022/04/29 00:35:58 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest_bytes;
	unsigned char	*src_bytes;

	if (dest == src)
		return (dest);
	dest_bytes = (unsigned char *)dest;
	src_bytes = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dest_bytes[i] = src_bytes[i];
		i++;
	}
	return (dest);
}
