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
	count = 1;
	if (ft_strchr(s, c))
	{
		i = 0;
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

static char	*find_next_start(char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] == c)
		i++;
	return (&(s[i]));
}

static char	**no_parts(void)
{
	char	**result;

	result = (char **)malloc(sizeof(char *));
	if (!result)
		return (0);
	result[0] = (void *)0;
	return (result);
}

static char	**split_and_add_to_array(char *s, int parts_count,
		char c, char **result)
{
	char	*start;
	char	*next;
	int		i;

	next = s;
	start = s;
	i = 0;
	while (i < parts_count)
	{
		if (ft_strchr(start, c))
			next = ft_strchr(start, c);
		else
			next = &(s[ft_strlen(s)]);
		result[i] = ft_substr(s, start - s, next - start);
		i++;
		start = next;
		start = find_next_start(start, c);
	}
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	*str;
	char	**result;
	char	set[1];
	int		parts_count;

	set[0] = c;
	str = (char *)s;
	if ((ft_strlen(str) == 0) || !(*find_next_start(str, c)))
		return (no_parts());
	str = ft_strtrim(str, set);
	parts_count = string_count(str, c);
	result = (char **)malloc((parts_count + 1) * sizeof(char *));
	if (!result)
		return (0);
	result = split_and_add_to_array(str, parts_count, c, result);
	result[parts_count] = (void *)0;
	return (result);
}
