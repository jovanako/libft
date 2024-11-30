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

static size_t	string_count(char *s, char c)
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
			count--;
		}
		while (s[i] != '\0')
		{
			if (s[i] == c)
			{
				count++;
				i++;
			}
			while (s[i] == c)
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
	size_t	s_end;
	size_t	i;
	int		parts_count;
	int		*delimiters;

	str = (char *)s;
	s_end = ft_strlen(str) - 1;
	parts_count = string_count(str, c);
	if (parts_count == 0)
		parts_count = 1;
	result = (char **)malloc((parts_count + 1) * sizeof(char *));
	if (!result)
		return (0);
	if (!ft_strchr(str, c))
		result[0] = str;
	next = str;
	i = 0;
	while (*str)
	{
		start = ft_strchr(str, c);
		if ((start != &str[s_end])
			&& (next != &str[s_end]))
		{
			next = ft_strchr(start + 1, c);
		}
		split = (char *)malloc((next - start + 1) * sizeof(char));
		if (!split)
			return (0);
		split = ft_substr(str, start - str, next - start);
		split[next - start] = '\0';
		result[i] = split;
		i++;
		str = (char *)&s_end;
	}
	result[parts_count] = (void *)0; 
}
