/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkovacev <jkovacev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:06:22 by jkovacev          #+#    #+#             */
/*   Updated: 2024/11/19 15:17:09 by jkovacev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	copy_from_src_to_dest(unsigned char *d, unsigned char *s, size_t size)
{
	size_t		i;

	if ((d > s) && (d < (s + size)))
	{
		i = size - 1;
		while (size != 0)
		{
			d[i] = s[i];
			size--;
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < size)
		{
			d[i] = s[i];
			i++;
		}
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			size;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	size = n;
	copy_from_src_to_dest(d, s, size);
	return (dest);
}
