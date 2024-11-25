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

static int	overlaps(const char *ptr1, size_t len1,
		const char *ptr2, size_t len2)
{
	const char	*end1 = ptr1 + (len1 - 1);
	const char	*end2 = ptr2 + (len2 - 1);

	if ((ptr1 == ptr2) || (ptr2 > ptr1 && ptr2 <= end1)
		|| (ptr1 > ptr2 && ptr1 <= end2))
		return (1);
	return (0);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	len_d;
	size_t	len_s;
	size_t	i;

	d = (char *)dest;
	s = (char *)src;
	if (src)
	{
		len_d = ft_strlen(d);
		len_s = ft_strlen(s);
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
