/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkovacev <jkovacev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:49:10 by jkovacev          #+#    #+#             */
/*   Updated: 2024/11/12 11:58:46 by jkovacev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char *a = "hello";
	char *b = "B";
	char *c = "good morning";

	printf("My function result: %zu\n", ft_strlen(a));
	printf("strlen() result: %zu\n", strlen(a));

	printf("My function result: %zu\n", ft_strlen(b));
        printf("strlen() result: %zu\n", strlen(b));

	printf("My function result: %zu\n", ft_strlen(c));
        printf("strlen() result: %zu\n", strlen(c));

	return (0);
}*/
