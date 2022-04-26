/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 17:30:05 by pfrances          #+#    #+#             */
/*   Updated: 2022/04/26 09:59:44 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_initial_length;

	if (size == 0)
		return (ft_strlen(src));
	dst_initial_length = ft_strlen(dst);
	if (dst_initial_length + 1 > size)
		return (ft_strlen(src) + size);
	while (*dst != '\0')
		dst++;
	size -= dst_initial_length;
	ft_strlcpy(dst, src, size);
	return (dst_initial_length + ft_strlen(src));
}
