/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkovacev <jkovacev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:52:50 by jkovacev          #+#    #+#             */
/*   Updated: 2024/11/11 16:09:41 by jkovacev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	return (c >= 33 && c <= 126);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	char a = '2';
	char b = 'a';
	char c = '\n';
	char d = '+';
	int e = 0;
	int f = 8;

	printf("My function result: %d\n", ft_isprint(a));
	printf("isprint() result: %d\n", isprint(a));

	printf("My function result: %d\n", ft_isprint(b));
        printf("isprint() result: %d\n", isprint(b));

	printf("My function result: %d\n", ft_isprint(c));
        printf("isprint() result: %d\n", isprint(c));

	printf("My function result: %d\n", ft_isprint(d));
        printf("isprint() result: %d\n", isprint(d));

	printf("My function result: %d\n", ft_isprint(e));
        printf("isprint() result: %d\n", isprint(e));

	printf("My function result: %d\n", ft_isprint(f));
        printf("isprint() result: %d", isprint(f));

	return (0);
}*/
