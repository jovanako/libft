/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkovacev <jkovacev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 16:29:01 by jkovacev          #+#    #+#             */
/*   Updated: 2024/11/28 17:13:27 by jkovacev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static size_t	delimiter_count(char *s, char c)
{
	size_t	i;
	size_t	counter;

	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			counter++;
		i++;		
	}
	return (counter);
}*/

char	**ft_split(char const *s, char c)
{
	char	*split;
	size_t	delimiter;
//	size_t	counter;
	int		*delimiters;

	split = (char *)s;
//	counter = delimiter_counter(split, c);
	while (split[i] != '\0')
	{
		if (split[i] == c)
		{
			i++;
		}

	}	
}
