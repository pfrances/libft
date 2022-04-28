/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 15:18:34 by pfrances          #+#    #+#             */
/*   Updated: 2022/04/29 01:01:55 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*chr_localisation;
	char	converted_c;

	chr_localisation = NULL;
	converted_c = (char)c;
	while (*s != '\0')
	{
		if (*s == converted_c)
			chr_localisation = s;
		s++;
	}
	if (converted_c == '\0')
		chr_localisation = s;
	return (chr_localisation);
}
