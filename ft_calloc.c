/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkovacev <jkovacev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:34:55 by jkovacev          #+#    #+#             */
/*   Updated: 2024/11/21 16:41:55 by jkovacev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*ptr;
	size_t	i;

	i = 0;
	if (nelem != 0 && elsize != 0)
	{
		ptr = (void *) malloc(nelem * elsize);
		if (!ptr)
		{
			return ((void *)0);
		}
		else
		{
			ft_bzero(ptr, nelem * elsize);
			return (ptr);
		}
	}
	return ((void *)0);
}
