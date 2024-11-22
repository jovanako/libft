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
	int		temp;

	temp = nelem * elsize;
	if ((temp / nelem == elsize) && (nelem != 0 && elsize != 0))
	{
		ptr = malloc(nelem * elsize);
		if (ptr)
		{
			ft_bzero(ptr, nelem * elsize);
		}
		return (ptr);
	}
	return ((void *)0);
}
