/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkovacev <jkovacev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:14:41 by jkovacev          #+#    #+#             */
/*   Updated: 2024/11/11 16:03:53 by jkovacev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	return (c >= 'a' && c <= 'z'
		|| c >= 'A' && c <= 'Z'
		|| c >= '0' && c <= '9');
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char a = '2';
	char b = 'a';
	char c = 'Y';
	int d = 10;
	int e = 0;

	printf("My function result: %d\n", ft_isalnum(a));
	printf("isalnum() result: %d\n", isalnum(a));

	printf("My function result: %d\n", ft_isalnum(b));
        printf("isalnum() result: %d\n", isalnum(b));

	printf("My function result: %d\n", ft_isalnum(c));
        printf("isalnum() result: %d\n", isalnum(c));

	printf("My function result: %d\n", ft_isalnum(d));
        printf("isalnum() result: %d\n", isalnum(d));

	printf("My function result: %d\n", ft_isalnum(e));
        printf("isalnum() result: %d", isalnum(e));

	return (0);
}*/
