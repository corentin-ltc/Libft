/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tort <cle-tort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 10:19:48 by cle-tort          #+#    #+#             */
/*   Updated: 2024/05/14 16:21:30 by cle-tort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int		i;
	char				*str;

	str = (char *)s;
	i = 0;
	while (n > i)
	{
		str[i] = c;
		i++;
	}
	return (s);
}
