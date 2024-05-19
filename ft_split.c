/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tort <cle-tort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 13:47:06 by cle-tort          #+#    #+#             */
/*   Updated: 2024/05/19 21:28:45 by cle-tort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countwords(char const *s, char sep)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != sep && i == 0)
			j++;
		else if (s[i] != sep && s[i - 1] == sep)
			j++;
		i++;
	}
	return (j);
}

char	**countletters(char const *s, char sep, char **dest)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] != sep)
		{
			i++;
			j++;
		}
		if (j > 0)
		{
			dest[k] = malloc(sizeof(char) * (j + 1));
			if (!dest[k++])
				return (NULL);
		}
		if (s[i++] == 0)
			return (dest);
		j = 0;
	}
	return (dest);
}

void	gigachadsplit(char const *s, char sep, char **dest)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] != sep && s[i])
		{
			dest[k][j] = s[i];
			i++;
			j++;
		}
		if (j > 0)
		{
			dest[k][j] = 0;
			k++;
		}
		if (s[i] == 0)
			return ;
		i++;
		j = 0;
	}
}

char	**ft_split(char const *s, char c)
{
	int		countw;
	char	**dest;

	countw = countwords(s, c);
	dest = malloc(sizeof(char *) * (countw + 1));
	if (!dest)
		return (NULL);
	dest[countw] = 0;
	countletters(s, c, dest);
	gigachadsplit(s, c, dest);
	return (dest);
}
/*
#include <stdio.h>

int main(int argc, char **argv)
{
	ft_split("tripouille", 0);
	//printf("countwords : %d", countwords(argv[1], 'x'));
}*/