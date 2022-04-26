/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 14:45:57 by pfrances          #+#    #+#             */
/*   Updated: 2022/04/23 20:13:02 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	converted_c;
	size_t			i;

	if (n == 0)
		return (NULL);
	ptr = (unsigned char *)s;
	i = 0;
	converted_c = (unsigned char)c;
	while (ptr[i] != converted_c && i < n - 1)
		i++;
	if (ptr[i] != converted_c)
		return (NULL);
	return ((void *)(ptr + i));
}
