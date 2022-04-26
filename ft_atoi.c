/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 16:20:59 by pfrances          #+#    #+#             */
/*   Updated: 2022/04/26 20:37:16 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_is_space(char c)
{
	return ((c >= '\t' && c <= '\r') || c == ' ');
}

static char	*check_sign(char *str_nbr, int *sign)
{
	if (*str_nbr == '+')
		return (str_nbr + 1);
	else if (*str_nbr == '-')
	{
		*sign = -1;
		return (str_nbr + 1);
	}
	else
		return (str_nbr);
}

static int	check_long_over_flow(long nbr, long unit, int sign)
{
	if (sign == 1 && nbr > (LONG_MAX - unit) / 10)
		return ((int)LONG_MAX);
	else if (sign == -1 && -(nbr) < (LONG_MIN + unit) / 10)
		return ((int)LONG_MIN);
	else
		return (1);
}

int	ft_atoi(const char *nptr)
{
	long	result;
	int		sign;
	int		over_flow_flag;
	char	*str_nbr;

	str_nbr = (char *)nptr;
	while (ft_is_space(*str_nbr))
		str_nbr++;
	sign = 1;
	str_nbr = check_sign(str_nbr, &sign);
	result = 0;
	while (*str_nbr != '\0' && ft_isdigit(*str_nbr))
	{
		over_flow_flag = check_long_over_flow(result, *str_nbr - '0', sign);
		if (over_flow_flag != 1)
			return (over_flow_flag);
		result = result * 10 + (*str_nbr - '0');
		str_nbr++;
	}
	return ((int)(result * sign));
}
