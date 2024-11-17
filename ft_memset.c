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

void	*ft_memset(void *str, int c, size_t n)
{
	size_t		i;
	unsigned char	*s;
	
	s = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		s[i++] = c;
	}
	return (str);
}
/*
#include <stdio.h>

int	main()
{
	char    str[13] = "Good morning\0";
	char    c = '+';
	size_t	n = 4;

        ft_memset(str, c, n);
	printf("Result: %s\n", str);
	
	char    str1[6] = "hello\0";
	memset(str1, c, n);
	printf("Real memset: %s\n", str1);
	
	return (0);
}*/
