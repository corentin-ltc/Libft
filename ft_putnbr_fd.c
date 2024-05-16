/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tort <cle-tort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 14:38:11 by cle-tort          #+#    #+#             */
/*   Updated: 2024/05/16 15:01:09 by cle-tort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n <= 9)
	{
		c = n + '0';
		write(fd, &c, 1);
	}
	if (n >= 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}
/*#include <stdio.h>

int main(int argc, char **argv)
{
	ft_putnbr_fd(atoi(argv[1]), 1);
}*/