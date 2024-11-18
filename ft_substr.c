/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkovacev <jkovacev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:08:13 by jkovacev          #+#    #+#             */
/*   Updated: 2024/11/18 12:53:19 by jkovacev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	substr = (char *) malloc (len * sizeof(char) + 1);
	if (!substr)
	{
		return ((void *)0);
	}
	else
	{
		while (i < len)
		{
			substr[i] = s[start];
			i++;
			start++;
		}
		substr[i] = '\0';
		return (substr);
	}
}
/*
#include <stdio.h>

int	main()
{
	char *s = "Hello world";
	size_t len = 5;
	unsigned int start = 6;
	char *substr;

	substr = ft_substr(s, start, len);
	printf("%s\n", substr);
	free(substr);

	s = "weightlifting";
	len = 7;
	substr = ft_substr(s, start, len);
        printf("%s\n", substr);
        free(substr);

	len = -2;
	substr = ft_substr(s, start, len);
	printf("%s\n", substr);
	free(substr);

	return (0);
}*/
