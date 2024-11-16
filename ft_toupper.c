/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkovacev <jkovacev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:38:15 by jkovacev          #+#    #+#             */
/*   Updated: 2024/11/12 16:27:13 by jkovacev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main()
{
	char c = 'a';
	printf("My result: %c\n", ft_toupper(c));
	printf("toupper() result: %c\n", toupper(c));
	c = 'A';
	printf("My result: %c\n", ft_toupper(c));
	printf("toupper() result: %c\n", toupper(c));
	c = 4;
	printf("Result: %d\n", ft_toupper(c));
	printf("toupper() result: %d\n", toupper(c));
	return (0);
}*/
