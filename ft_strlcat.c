/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkovacev <jkovacev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:49:59 by jkovacev          #+#    #+#             */
/*   Updated: 2024/11/18 12:54:39 by jkovacev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	dst_i;
	int	src_i;
	size_t	total_len;

	total_len = ft_strlen(dst) + ft_strlen(src);	
	dst_i = ft_strlen(dst);
	src_i = 0;
	if (size != 0)
	{
		while (size > 1 && src[src_i] != '\0')
		{
			dst[dst_i++] = src[src_i++];
			size--;
		}
		dst[dst_i] = '\0';
	}
	return (total_len);
}
