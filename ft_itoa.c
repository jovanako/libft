/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkovacev <jkovacev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 12:40:21 by jkovacev          #+#    #+#             */
/*   Updated: 2024/11/22 17:19:40 by jkovacev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	int_length(unsigned int n)
{
	long	num;
	size_t	int_len;

	int_len = 0;
	num = n;
	if (num < 0)
		num *= -1;
	if(num == 0)
		int_len = 1;
	while (num > 0)
	{
		num /= 10;
		int_len++;
	}
	return int_len;
}

char	*ft_itoa(int n)
{
	size_t	int_len;
	char	*result;
	char	sign;

	int_len = int_length(n);
	result = (char *)malloc(int_len * sizeof(char) + 1);
	if (!result)
		return (0);
	if (n < 0)
	{
		result[0] = '-';
		n *= -1;
	}
	result[int_len] = '\0';
	while (int_len)
	{
		result[--int_len] = (n % 10) + '0';
		n /= 10;
	}
	return (result);
}

#include <stdio.h>
int	main(void)
{
	char *str = ft_itoa(-3543);

	printf("%s\n", str);
	free(str);
	return (0);
}
