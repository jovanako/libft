/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkovacev <jkovacev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:19:05 by jkovacev          #+#    #+#             */
/*   Updated: 2024/11/20 15:50:36 by jkovacev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*p_first;
	
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (*big)
	{
		if (*big == *little)
		{
			p_first = (char *)big;
			if (ft_strncmp(big, little, len) == 0)
				return (p_first);
		}
		big++;
	}
	return (NULL);
}
