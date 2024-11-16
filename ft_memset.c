/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkovacev <jkovacev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:47:39 by jkovacev          #+#    #+#             */
/*   Updated: 2024/11/13 11:55:26 by jkovacev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	*memset(void *str, int c, size_t n)
{
	int		i;
	char	*prefix;
	char	*suffix;
	char	*result;
	unsigned char	*s;
	
	s = (unsigned char *)str;
	if (n < ft_strlen(s))
	{
		prefix = ft_substr(s, 0, n);
		suffix = ft_substr(s, n, ft_strlen(s));
		i = 0;
		while (i < n)
		{
			prefix[i++] = c;
		}
		result = ft_strjoin(prefix, suffix);
		result[ft_strlen(result)] = '\0';
	}
	return (str);
}
/*
#include <stdlib.h>
#include <stdio.h>

int	main()
{
	int     i;
	char    *prefix;
	char    *suffix;
	char    *result;
	char    *str = "Good morning";
	char    c = '+';
	size_t	n = 4;

	if (n < ft_strlen(str))
	{       
		prefix = ft_substr(str, 0, n);
		suffix = ft_substr(str, n, ft_strlen(str));
		i = 0;
		while (i < n)
		{
			prefix[i++] = c;
		}
		result = ft_strjoin(prefix, suffix);
		result[ft_strlen(result)] = '\0';
	}
	printf("Result: %s", result);
	return (0);
}*/
