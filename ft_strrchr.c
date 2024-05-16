/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tort <cle-tort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 10:20:45 by cle-tort          #+#    #+#             */
/*   Updated: 2024/05/14 17:26:55 by cle-tort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	*mem;

	mem = NULL;
	str = (char *)s;
	while (*str != '\0')
	{
		if (*str == c)
			mem = str;
		str++;
	}
	return (mem);
}
