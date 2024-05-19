/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tort <cle-tort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:29:43 by cle-tort          #+#    #+#             */
/*   Updated: 2024/05/14 18:20:33 by cle-tort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;
	int	lenght;

	lenght = ft_strlen(little);
	if (lenght == 0)
		return ((char *)big);
	i = 0;
	while (big[i] && len != 0)
	{
		j = 0;
		while (big[i + j] == little[j])
		{
			if (j == lenght)
				return ((char *)&big[i]);
			j++;
		}
		i++;
		len--;
	}
	return (NULL);
}

