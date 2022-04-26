/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 19:47:55 by pfrances          #+#    #+#             */
/*   Updated: 2022/04/20 18:33:45 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	buff[11];
	size_t	i;
	int		divisor;

	if (n == INT_MIN)
		return (ft_putstr_fd("-2147483648", fd));
	i = 0;
	if (n < 0)
	{
		n *= (-1);
		buff[i] = '-';
		i++;
	}
	divisor = 1;
	while (n / divisor >= 10)
		divisor *= 10;
	while (divisor > 0)
	{
		buff[i] = (n / divisor) + '0';
		n %= divisor;
		divisor /= 10;
		i++;
	}
	write(fd, buff, i);
}
