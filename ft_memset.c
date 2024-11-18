/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkovacev <jkovacev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:47:39 by jkovacev          #+#    #+#             */
/*   Updated: 2024/11/18 12:56:11 by jkovacev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
