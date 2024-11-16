/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkovacev <jkovacev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:20:24 by jkovacev          #+#    #+#             */
/*   Updated: 2024/11/11 15:37:11 by jkovacev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 177);
}
/*
#include <stdio.h>
#include <ctype.h>

int     main(void)
{
        char a = '2';
        char b = 'a';
        char c = '+';

        printf("My function result: %d\n", ft_isascii(a));
        printf("isascii() result: %d\n", isascii(a));

        printf("My function result: %d\n", ft_isascii(b));
        printf("isascii() result: %d\n", isascii(b));

        printf("My function result: %d\n", ft_isascii(c));
        printf("isascii() result: %d\n", isascii(c));

        return (0);
}*/
