/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkovacev <jkovacev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:00:48 by jkovacev          #+#    #+#             */
/*   Updated: 2024/11/11 15:27:41 by jkovacev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	return (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z');
}
/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	char a = '2';
        char b = 'a';
        char c = 'Y';
        char d = '+';

        printf("My function result: %d\n", ft_isalpha(a));
        printf("isalpha() result: %d\n", isalpha(a));

        printf("My function result: %d\n", ft_isalpha(b));
        printf("isalpha() result: %d\n", isalpha(b));

        printf("My function result: %d\n", ft_isalpha(c));
        printf("isalpha() result: %d\n", isalpha(c));

        printf("My function result: %d\n", ft_isalpha(d));
        printf("isalpha() result: %d", isalpha(d));

        return (0);
}*/
