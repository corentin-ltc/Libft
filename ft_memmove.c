/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tort <cle-tort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 10:17:25 by cle-tort          #+#    #+#             */
/*   Updated: 2024/05/14 16:47:40 by cle-tort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int		i;
	char	*str;
	char	*strd;

	str = (char *)dest;
	strd = (char *)src;
	i = 0;
	while (n > 0)
	{
		str[i] = strd[i];
		i++;
		n--;
	}
	return (dest);
}
