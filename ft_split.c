/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 19:07:05 by pfrances          #+#    #+#             */
/*   Updated: 2022/04/29 13:56:53 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	nbrs_ptr_calculate(const char *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = (str[i] != c && str[i] != '\0');
	while (str[i] != '\0')
	{
		if (str[i] == c && str[i + 1] != '\0' && str[i + 1] != c)
			count++;
		i++;
	}
	return (count);
}

static size_t	str_fill_and_jump(char **dest, const char *src, char c)
{
	size_t	start;
	size_t	i;

	start = 0;
	while (src[start] != '\0' && src[start] == c)
		start++;
	i = 0;
	while (src[start + i] != '\0' && src[start + i] != c)
		i++;
	*dest = malloc(sizeof(char) * (i + 1));
	if (*dest == NULL)
		return (0);
	ft_strlcpy(*dest, src + start, i + 1);
	return (start + i);
}

static char	**free_previous_str(char **tab, size_t	size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	jump;
	size_t	nbrs_ptr;
	size_t	i;

	if (s == NULL)
		return (NULL);
	nbrs_ptr = nbrs_ptr_calculate(s, c);
	result = malloc(sizeof(char *) * (nbrs_ptr + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < nbrs_ptr)
	{
		jump = str_fill_and_jump(&result[i], s, c);
		if (jump == 0)
			return (free_previous_str(result, i));
		s += jump;
		i++;
	}
	result[i] = NULL;
	return (result);
}
