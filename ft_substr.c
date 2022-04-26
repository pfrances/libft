/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 16:27:17 by pfrances          #+#    #+#             */
/*   Updated: 2022/04/25 18:36:32 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	substr_size;

	if (s == NULL)
		return (NULL);
	else if (start > ft_strlen(s) || len == 0)
		return (ft_strdup(""));
	substr_size = ft_strlen(s + start);
	if (substr_size > len)
		substr_size = len;
	substr = malloc(sizeof(char) * (substr_size + 1));
	if (substr == NULL)
		return (NULL);
	ft_strlcpy(substr, s + start, substr_size + 1);
	return (substr);
}
