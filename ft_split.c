/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tort <cle-tort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 13:47:06 by cle-tort          #+#    #+#             */
/*   Updated: 2024/05/16 14:31:05 by cle-tort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int countwords(char const *s, char sep)
{
	size_t	i;
	int	j;

	i = 0;
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

void	ft_secator(int countw, char **dest)
{

} 

char	**ft_split(char const *s, char c)
{
	int	countw;
	int	countl;
	char	**dest;
	int	i;
	int	j;

	countw = countwords(s, c);
	dest = malloc(sizeof(char *) * (countw + 1));
	i = 0;
	j = 0;
	while(s[i] && j < countw)
	{
		countl = 0;
		while (s[i] != c)
			countl++;
		if (countl > 0)
		{
			dest[j] = malloc(sizeof(char) * (countl + 1));
			while(countl >= 0)
			{
				dest[j][i]
			}
		}
	}
}

#include <stdio.h>

int main(int argc, char **argv)
{
	printf("countwords : %d", countwords(argv[1], 'x'));
}