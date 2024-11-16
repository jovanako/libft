/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkovacev <jkovacev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:00:10 by jkovacev          #+#    #+#             */
/*   Updated: 2024/11/11 15:20:33 by jkovacev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char a = '5';
	char b = 's';
	char c = '0';
	char d = '^';

	printf("My function result: %d\n", ft_isdigit(a));
	printf("isdigit() result: %d\n", isdigit(a));

	printf("My function result: %d\n", ft_isdigit(b));
        printf("isdigit() result: %d\n", isdigit(b));

	printf("My function result: %d\n", ft_isdigit(c));
        printf("isdigit() result: %d\n", isdigit(c));

	printf("My function result: %d\n", ft_isdigit(d));
        printf("isdigit() result: %d\n", isdigit(d));

	return (0);
}*/
