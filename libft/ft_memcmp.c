/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tort <cle-tort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:53:55 by cle-tort          #+#    #+#             */
/*   Updated: 2024/05/14 17:10:50 by cle-tort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	i;
	const unsigned char *ss1 = s1;
	const unsigned char *ss2 = s2;

	if (n <= 0)
		return (0);
	i = 0;
	while (ss1[i] == ss2[i] && n != 0)
	{
		i++;
		n--;
	}
	return (ss1 - ss2);
}