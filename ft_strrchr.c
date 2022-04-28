/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 15:18:34 by pfrances          #+#    #+#             */
/*   Updated: 2022/04/29 01:23:58 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*chr_localisation;
	char	*ptr;
	char	converted_c;

	chr_localisation = NULL;
	ptr = (char *)s;
	converted_c = (char)c;
	while (*ptr != '\0')
	{
		if (*ptr == converted_c)
			chr_localisation = ptr;
		ptr++;
	}
	if (converted_c == '\0')
		chr_localisation = ptr;
	return (chr_localisation);
}
