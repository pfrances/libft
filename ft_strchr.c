/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 15:46:53 by pfrances          #+#    #+#             */
/*   Updated: 2022/04/29 00:50:46 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
//	char	*chr_localisation;
	char	converted_c;

//	chr_localisation = (char *)s;
	converted_c = (char)c;
	while (*s != converted_c && *s != '\0')
		s++;
	if (*s == '\0' && converted_c != '\0')
		return (NULL);
	return (s);
}
