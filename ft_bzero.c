/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkovacev <jkovacev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:51:56 by jkovacev          #+#    #+#             */
/*   Updated: 2024/11/13 11:54:03 by jkovacev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_bzero(void *str, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	while (n > 0)
	{
		*ptr++ = '\0';
		n--;
	}
}
/*
#include <stdio.h>
#include <strings.h>

int	main()
{
	char *s1 = "Hello World";
	ft_bzero(s1, 4);
	printf("My result: %s", s1);

	char *s2 = "Hello World";
	bzero(s2, 4);
	printf("bzero result: %s", s2);
	return (0);
}*/
