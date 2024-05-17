/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tort <cle-tort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 09:21:17 by cle-tort          #+#    #+#             */
/*   Updated: 2024/05/15 17:27:17 by cle-tort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*dst;

	if (!nmemb || !size)
	{
		dst = malloc(sizeof(1));
		dst[0] = 0;
		return (dst);
	}
	if (nmemb > INT_MAX / size)
		return (NULL);
	dst = malloc(nmemb * size);
	if (!dst)
		return (NULL);
	ft_bzero(dst, nmemb * size);
	return (dst);
}
/*
int main(void)
{
	ft_calloc(-5, -5);
}*/