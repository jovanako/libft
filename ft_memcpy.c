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

/*size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}
*/
static int	check_for_overlap(const void *ptr1, size_t len1, const void *ptr2, size_t len2)
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
	int	i;

	len_d = ft_strlen(d);
	len_s = ft_strlen(s);
	i = 0;
	if (!check_for_overlap(d, len_d, s, len_s))
	{
		while(i < n)
		{
			d[i] = s[i];
			i++;
		}
		d[i] = '\0';
	}
	return (d);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char dest[20] = "42 Berlin";
	char src[20];
	
	printf("My result: %s\n", ft_memcpy(dest, src, ft_strlen(src) + 1));
	printf("memcpy() result: %s", memcpy(dest, src, ft_strlen(src) + 1));
	return (0);
}*/
