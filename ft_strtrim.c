/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkovacev <jkovacev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:33:50 by jkovacev          #+#    #+#             */
/*   Updated: 2024/11/22 16:17:22 by jkovacev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	is_equal(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		*set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	end_i;
	size_t	s1_len;
	size_t	move_start;
	size_t	move_end;

	i = 0;
	s1_len = ft_strlen(s1);
	end_i = s1_len - 1;
	move_start = 0;
	move_end = 0;
	while (s1[i])
	{
		if (!is_equal(s1[i++], set))
			break ;
		move_start++;
	}
	while (end_i > i)
	{
		if (!is_equal(s1[end_i--], set))
			break ;
		move_end++;
	}
	return (ft_substr(s1, move_start, (s1_len - move_start - move_end))); 
}
