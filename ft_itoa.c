/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 12:29:37 by pfrances          #+#    #+#             */
/*   Updated: 2022/04/23 19:38:12 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	length_calculator(int n)
{
	size_t	length;

	length = 1;
	if (n < 0)
	{
		n *= (-1);
		length++;
	}
	while (n > 9)
	{
		length++;
		n /= 10;
	}
	return (length);
}

static int	divisor_calculate(int n)
{
	int	divisor;

	divisor = 1;
	while (divisor <= n / 10)
		divisor *= 10;
	return (divisor);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		divisor;
	size_t	i;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	result = malloc(sizeof(char) * (length_calculator(n) + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		result[i++] = '-';
		n *= (-1);
	}
	divisor = divisor_calculate(n);
	while (divisor > 0)
	{
		result[i++] = (n / divisor) + '0';
		n %= divisor;
		divisor /= 10;
	}
	result[i] = '\0';
	return (result);
}
