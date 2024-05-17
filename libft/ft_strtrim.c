/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tort <cle-tort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 17:54:24 by cle-tort          #+#    #+#             */
/*   Updated: 2024/05/15 19:14:55 by cle-tort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	checkchar(char c, const char *set);

size_t ft_len(const char *s1, const char *set)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while(s1[i])
	{
		if (!checkchar(s1[i], set))
			k++;
		i++;
	}
	return(ft_strlen(s1) - k);
}

int	checkchar(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	size_t	len;
	int		i;
	int		k;

	len = ft_len(s1, set);
	dest = malloc(sizeof(char) * (len + 1));
	i = 0;
	k = 0;
	while (s1[i])
	{
		if (checkchar(s1[i], set))
		{
			dest[k] = s1[i];
			k++;
		}
		i++;
	}
	dest[k] = 0;
	return (dest);
}
/*
#include <stdio.h>
int main (int argc, char **argv)
{

	printf("%s\n", ft_strtrim("abcdba", "acb"));
	//printf("%s\n", ft_strtrim(argv[1], argv[2]));
}
*/