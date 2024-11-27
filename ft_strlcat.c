/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkovacev <jkovacev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:49:59 by jkovacev          #+#    #+#             */
/*   Updated: 2024/11/19 15:20:50 by jkovacev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_i;
	size_t	src_i;
	size_t	total_len;

	total_len = ft_strlen(src) + ft_strlen(dst);
	dst_i = ft_strlen(dst);
	if ((size - dst_i) == 0)
		return (total_len);
	src_i = 0;
	while (size > 0 && src[src_i] != '\0')
	{
		dst[dst_i++] = src[src_i++];
		size--;
	}
	dst[dst_i] = '\0';
	return (total_len);
}
/*
#include <string.h>
#include <stdio.h>

int main()
{
	char dst[30];
	memset(dst, 0, 30);
	char *src = (char *)"AAAAAAAAA";
	dst[0] = 'B';
	printf("Total length: %zu\nsrc length: %zu\n",
			ft_strlcat(dst, src, 1), ft_strlen(src));
	printf("Dest: %s\n", dst);
	return 0;	
}*/