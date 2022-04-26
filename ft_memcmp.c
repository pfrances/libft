/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 15:13:02 by pfrances          #+#    #+#             */
/*   Updated: 2022/04/17 20:17:35 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_bytes;
	unsigned char	*s2_bytes;

	s1_bytes = (unsigned char *)s1;
	s2_bytes = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s1_bytes[i] != s2_bytes[i])
			return (s1_bytes[i] - s2_bytes[i]);
		i++;
	}
	return (0);
}
