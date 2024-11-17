/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkovacev <jkovacev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:03:07 by jkovacev          #+#    #+#             */
/*   Updated: 2024/11/14 11:29:46 by jkovacev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

static int	overlaps(const void *ptr1, size_t len1, const void *ptr2, size_t len2)
{
	const char *start1 = (const char *)ptr1;
	const char *start2 = (const char *)ptr2;
	const char *end1 = start1 + len1;
	const char *end2 = start2 + len2;

	if (start1 < end2 && start2 < end1)
		return (1);
	return (0);

}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d = (char *)dest;
	char	*s = (char *)src;
	size_t	len_d;
	size_t	len_s;
	size_t	i;

	len_d = ft_strlen(d);
	len_s = ft_strlen(s);
	i = 0;
	if (!overlaps(d, len_d, s, len_s))
	{
		while(i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	const char *src = "42 Berlin";
	char dest[10] = "123456789";
	char *d;
	char *d_c;
	
	d = ft_memcpy(dest, src, 3);
        printf("My result: %s\n", d);

	d = ft_memcpy(dest, src, ft_strlen(src));
	printf("My result: %s\n", d);
	d_c = memcpy(dest, src, ft_strlen(src));
        printf("memcpy() result: %s\n", d_c);

	d = ft_memcpy(dest, src, 3);
	printf("My result: %s\n", d);
	
	return (0);
}
*/
