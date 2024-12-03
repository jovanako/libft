/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkovacev <jkovacev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:03:07 by jkovacev          #+#    #+#             */
/*   Updated: 2024/11/19 15:23:17 by jkovacev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	overlaps(unsigned char *ptr1, size_t len1,
		unsigned char *ptr2, size_t len2)
{
	unsigned char	*end1 = ptr1 + (len1 - 1);
	unsigned char	*end2 = ptr2 + (len2 - 1);

	if ((ptr1 == ptr2) || (ptr2 > ptr1 && ptr2 <= end1)
		|| (ptr1 > ptr2 && ptr1 <= end2))
		return (1);
	return (0);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t	len_d;
	size_t	len_s;
	size_t	i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (src)
	{
		len_d = ft_strlen((char *)d);
		len_s = ft_strlen((char *)s);
		i = 0;
		if (!overlaps(d, len_d, s, len_s))
		{
			while (i < n)
			{
				d[i] = s[i];
				i++;
			}
		}
	}
	return (dest);
}
