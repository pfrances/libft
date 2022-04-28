/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 18:04:03 by pfrances          #+#    #+#             */
/*   Updated: 2022/04/29 00:58:52 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	s1_len;
	size_t	total_length;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1_len = ft_strlen(s1);
	total_length = s1_len + ft_strlen(s2);
	result = malloc(sizeof(char) * (total_length + 1));
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, s1, s1_len + 1);
	ft_strlcat(result + s1_len, s2, total_length + 1);
	return (result);
}
