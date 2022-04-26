/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 18:14:28 by pfrances          #+#    #+#             */
/*   Updated: 2022/04/26 21:35:38 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	set_charset_tab(unsigned char *tab, const char *set)
{
	size_t	i;

	ft_bzero(tab, 256);
	i = 0;
	while (set[i] != '\0')
	{
		tab[(unsigned char)set[i]] = 1;
		i++;
	}
}

static unsigned char	*str_skip(unsigned char	*str, unsigned char *tab)
{
	while (tab[*str] != 0 && *str != '\0')
		str++;
	return (str);
}

static size_t	size_calulate(unsigned char *str, unsigned char *tab)
{
	size_t	i;

	str = str_skip(str, tab);
	i = 0;
	while (str[i] != '\0')
		i++;
	while (i > 0 && tab[str[i - 1]] != 0)
		i--;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned char	tab[256];
	unsigned char	*s1_cpy;
	char			*result;
	size_t			result_length;

	if (s1 == NULL || set == NULL)
		return (NULL);
	set_charset_tab(tab, set);
	s1_cpy = (unsigned char *)s1;
	result_length = size_calulate(s1_cpy, tab);
	result = malloc(sizeof(char) * (result_length + 1));
	if (result == NULL)
		return (NULL);
	s1_cpy = str_skip(s1_cpy, tab);
	ft_strlcpy(result, (char *)s1_cpy, result_length + 1);
	return (result);
}
