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

static int	string_count(char *s, char c)
{
	size_t	i;
	size_t	s_len;
	int		count;

	s_len = ft_strlen(s);
	count = 0;
	if (ft_strchr(s, c))
	{
		i = 0;
		if ((s[i] != c) && (s[s_len - 1] != c))
		{
			count++;
		}
		if ((s[i] == c) && (s[s_len - 1] == c)) 
		{
			count -= 2;
		}
		while (i != s_len)
		{
			if (s[i] == c)
			{
				count++;
			}
			while (s[i] == c)
				i++;
			i++;		
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	*str;
	char	*split;
	char	**result;
	char	*start;
	char	*next;
	size_t	i;
	size_t	s_len;
	int		parts_count;

	str = (char *)s;
	s_len = ft_strlen(s);
	if (*s)
	{
		parts_count = string_count(str, c);
		if (parts_count == 0)
			parts_count = 1;
		result = (char **)malloc((parts_count + 1) * sizeof(char *));
		if (!result)
			return (0);
		if (!ft_strchr(str, c))
			result[0] = str;
		next = str;
		while (str != &(s[s_len]))
		{
			if (*str == c)
			{
				while (*str == c)
				str++;
			}
			start = str;
			i = 0;
			if (start != &(s[s_len]))
			{
				if (ft_strchr(start, c))
					next = ft_strchr(start, c);
				else
					next = str + s_len;
				split = ft_substr(s, start - s, next - start);
				result[i] = split;
				i++;
				str = next;
			}
		}
	}
	result[parts_count] = (void *)0;
	return (result);
}