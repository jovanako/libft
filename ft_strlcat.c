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

	total_len = ft_strlen(dst) + ft_strlen(src);
	dst_i = ft_strlen(dst);
	src_i = 0;
	while (size > 0 && src[src_i] != '\0')
	{
		dst[dst_i++] = src[src_i++];
		size--;
	}
	dst[dst_i] = '\0';
	return (total_len);
}
