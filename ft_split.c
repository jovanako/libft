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

static char     *generate_trimmed_copy(char const *s1,
                char *copy, size_t start, size_t copy_size)
{
        size_t  i;

        i = 0;
        while (i < copy_size)
        {
                copy[i] = s1[start];
                i++;
                start++;
        }
        copy[i] = '\0';
        return (copy);
}

static char     *trim_string(char const *s1, char c)
{
        char    *copy;
        size_t  end;
        size_t  s1_len;
        size_t  start;
        size_t  copy_size;

		if (s1)
		{
			s1_len = ft_strlen(s1);
			start = 0;
			end = s1_len - 1;
			while (s1[start] && (s1[start] == c))
			{
					start++;
			}
			while ((end > start) && (s1[end] == c))
			{
					end--;
			}
			copy_size = end - start + 1;
			copy = (char *) malloc ((copy_size + 1) * sizeof(char));
			if (!copy)
					return ((char *)0);
        	return (generate_trimmed_copy(s1, copy, start, copy_size));
		}
		return (0);
}

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

static char *find_next_start(char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] == c)
		i++;
	return &(s[i]);
}

static int  has_parts(char *s, char c)
{
    size_t i;
	
	i = 0;    
    while (s[i])
    {
        if (s[i] != c)
            return (1);
        i++;
    }
    return (0);
}

char	**ft_split(char const *s, char c)
{
	char	*str;
	char	*split;
	char	**result;
	char	*start;
	char	*next;
	int	i;
	size_t	s_len;
	int		parts_count;

	str = (char *)s;
	s_len = ft_strlen(str);
	if ((s_len == 0) || (!has_parts(str, c)))
	{
		parts_count = 0;
		result = (char **)malloc((parts_count + 1) * sizeof(char *));
		result[parts_count] = (void *)0;
		return (result);
	}
	str = trim_string(str, c);
	parts_count = string_count(str, c);
	if (parts_count == 0)
		parts_count = 1;
	result = (char **)malloc((parts_count + 1) * sizeof(char *));
	if (!result)
		return (0);
	if (!ft_strchr(str, c))
		result[0] = str;
	next = str;
	start = str;
	i = 0;
	while (i < parts_count)
	{
		if (ft_strchr(start, c))
			next = ft_strchr(start, c);
		else
			next = &(str[s_len]);
		split = ft_substr(str, start - str, next - start);
		result[i] = split;
		i++;
		start = next;
		start = find_next_start(start, c);
	}
	result[parts_count] = (void *)0;
	return (result);
}