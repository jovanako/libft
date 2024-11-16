/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkovacev <jkovacev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:01:22 by jkovacev          #+#    #+#             */
/*   Updated: 2024/11/12 16:24:05 by jkovacev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main()
{
	char c = 'A';
	printf("My result: %c\n", ft_tolower(c));
	printf("tolower() result: %c\n", tolower(c));
	c = 'a';
	printf("My result: %c\n", ft_tolower(c));
	printf("tolower() result: %c\n", tolower(c));
	c = 4;
	printf("Result: %d\n", ft_tolower(c));
	printf("tolower() result: %d\n", tolower(c));
	return (0);
}*/
