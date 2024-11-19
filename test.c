/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkovacev <jkovacev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:49:10 by jkovacev          #+#    #+#             */
/*   Updated: 2024/11/19 15:40:33 by jkovacev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void	test_isalpha(void)
{
	printf("Result for ft_isalpha: %d, %d, %d, %d\n", ft_isalpha('2'), ft_isalpha('a'), ft_isalpha('Y'), ft_isalpha('+'));
	printf("Result for libc isalpha: %d, %d, %d, %d\n", isalpha('2'), isalpha('a'), isalpha('Y'), isalpha('+'));
}

void    test_isdigit(void)
{
        printf("Result for ft_isdigit: %d, %d, %d, %d\n", ft_isdigit('5'), ft_isdigit('s'), ft_isdigit('0'), ft_isdigit('^'));
        printf("Result for libc isdigit: %d, %d, %d, %d\n", isdigit('5'), isdigit('s'), isdigit('0'), isdigit('^'));
}

void    test_isalnum(void)
{
        printf("Result for ft_isalnum: %d, %d, %d, %d, %d\n", ft_isalnum('2'), ft_isalnum('a'), ft_isalnum('Y'), ft_isalnum('&'), ft_isalnum('0'));
        printf("Result for libc isalnum: %d, %d, %d, %d, %d\n", isalnum('2'), isalnum('a'), isalnum('Y'), isalnum('&'), isalnum('0'));
}

void    test_isascii(void)
{
        printf("Result for ft_isascii: %d, %d, %d, %d, %d, %d\n", ft_isascii('2'), ft_isascii('a'), ft_isascii('+'), ft_isascii(-1), ft_isascii(178), ft_isascii(250));
        printf("Result for libc isascii: %d, %d, %d, %d, %d, %d\n", isascii('2'), isascii('a'), isascii('+'), isascii(-1), isascii(178), isascii(250));
}

void    test_isprint(void)
{
        printf("Result for ft_isprint: %d, %d, %d, %d, %d, %d\n", ft_isprint('2'), ft_isprint('a'), ft_isprint('\n'), ft_isprint('+'), ft_isprint(0), ft_isprint(8));
	printf("Result for libc isprint: %d, %d, %d, %d, %d, %d\n", isprint('2'), isprint('a'), isprint('\n'), isprint('+'), isprint(0), isprint(8));
}

void    test_strlen(void)
{
	char	*a = "hello";
	char	*b = "B";
	char	*c = "good morning";

        printf("Result for ft_strlen: %zu, %zu, %zu\n", ft_strlen(a), ft_strlen(b), ft_strlen(c));
	printf("Result for libc strlen: %zu, %zu, %zu\n", strlen(a), strlen(b), strlen(c));
}

void	test_memset(void)
{
	char	s1[13] = "Good morning\0";
	char	c = '+';
	size_t	n = 4;

	ft_memset(s1, c, n);
	printf("Result for ft_memset: %s\n", s1);

	char	s2[13] = "Good morning\0";

	memset(s2, c, n);
	printf("Result for libc memset: %s\n", s2);

	char s3[6] = "hello\0";

	ft_memset(s3, c, n);
	printf("Result for ft_memset: %s\n", s3);

	char s4[6] = "hello\0";

	memset(s4, c, n);
	printf("Result for libc memset: %s\n", s4);
}

void	test_bzero(void)
{
	char	s1[12] = "Hello World\0";
	ft_bzero(s1, 4);
	printf("Result for ft_bzero: %s\n", s1);

	char	s2[12] = "Hello World\0";
	bzero(s2, 4);
	printf("Result for libc bzero: %s\n", s2);
}

void	test_memcpy(void)
{
	const char *src = "42 Berlin";
	char	dest[10] = "123456789";
	char	*d;
	char	*d_c;

	d = ft_memcpy(dest, src, 3);
	printf("Result for ft_memcpy: %s\n", d);
	d_c = memcpy(dest, src, 3);
	printf("Result for libc memcpy: %s\n", d_c);

	d = ft_memcpy(dest, src, ft_strlen(src));
	printf("Result for ft_memcpy: %s\n", d);
	d_c = memcpy(dest, src, strlen(src));
	printf("Result for libc memcpy: %s\n", d_c);
}

void	test_memmove(void)
{
	char test1[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', '\0'};
	char *d1;
	d1 = &test1[3];
	char *s1;
	s1 = &test1[0];
	ft_memmove(d1, s1, 4);
	printf("Result 1 for ft_memmove: %s\n", d1);

	char test1c[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', '\0'};
	char *d1c;
	d1c = &test1c[3];
	char *s1c;
	s1c = &test1c[0];
	memmove(d1c, s1c, 4);
	printf("Result 1 for memmove: %s\n", d1c);

	char test2[] = { '1', '2', '3', '4', '5', '6', '0', '0', '0', '\0'};
	char *d2;
	d2 = &test2[5];
	char *s2;
	s2 = &test2[0];
	ft_memmove(d2, s2, 3);
	printf("Result 2 for ft_memmove: %s\n", d2);

	char test2c[] = { '1', '2', '3', '4', '5', '6', '0', '0', '0', '\0'};
	char *d2c;
	d2c = &test2c[5];
	char *s2c;
	s2c = &test2c[0];
	memmove(d2c, s2c, 3);
	printf("Result 2 for memmove: %s\n", d2c);

	char test3[] = { '7', '8', '9', '0', '0', '0', '\0'};
	char *d3;
	d3 = &test3[2];
	char *s3;
	s3 = &test3[0];
	ft_memmove(d3, s3, 2);
	printf("Result 3 for ft_memmove: %s\n", d3);
	
	char test3c[] = { '7', '8', '9', '0', '0', '0', '\0'};
	char *d3c;
	d3c = &test3c[2];
	char *s3c;
	s3c = &test3c[0];
	memmove(d3c, s3c, 2);
	printf("Result 3 for memmove: %s\n", d3c);
}

void	test_strlcpy(void)
{
	char	d1[13];
	const char	*src1 = "good morning";
	size_t result;

	result = ft_strlcpy(d1, src1, 13);
	printf("Result for ft_strlcpy:	Total length(12): %zu	Resulting string(good morning): %s\n", result, d1);

	char	d2[5];
	const char	*src2 = "blah";
	
	result = ft_strlcpy(d2, src2, 5);
	printf("Result for ft_strlcpy:	Total length(4): %zu	Resulting string(blah): %s\n", result, d2);
}

void	test_strlcat(void)
{
	const char *s1 = "morning";
	char d1[13] = "Good ";
	size_t result;

	result = ft_strlcat(d1, s1, 13);
	printf("Result for ft_strlcat:	Total length (12): %zu	Resulting string (Good morning): %s\n", result, d1);

	const char *s2 = "5678";
	char d2[9] = "1234";
        result = ft_strlcat(d2, s2, 9);
	printf("Result for ft_strlcat:	Total length (8): %zu	Resulting string (12345678): %s\n", result, d2);
}

void	test_toupper(void)
{
	printf("Result for ft_toupper: %c, %c, %c\n", ft_toupper('a'), ft_toupper('A'), ft_toupper('4'));
        printf("Result for libc toupper: %c, %c, %c\n", toupper('a'), toupper('A'), toupper('4'));
}

void    test_tolower(void)
{
        printf("Result for ft_tolower: %c, %c, %c\n", ft_tolower('A'), ft_tolower('a'), ft_tolower('4'));
        printf("Result for libc tolower: %c, %c, %c\n", tolower('A'), tolower('a'), tolower('4'));
}

void	test_strchr(void)
{
	const char *s1 = "abcadd";
	char c1 = 'a';
	char *expected1;
	expected1 = (char *)&s1[0];
	printf("Result 1 for ft_strchr: %p	expected: %p\n", ft_strchr(s1, c1), expected1);
	printf("Result 1 for libc strchr: %p\n", strchr(s1, c1));

	char c2 = 'd';
	char *expected2;
	expected2 = (char *)&s1[4];
	printf("Result 2 for ft_strchr: %p	expected: %p\n", ft_strchr(s1, c2), expected2);
	printf("Result 2 for libc strchr: %p\n", strchr(s1, c2));
}

void	test_strrchr(void)
{
	const char *s1 = "abcadd";
	char c1 = 'a';
	char *expected1;
	expected1 = (char *)&s1[3];
	printf("Result 1 for ft_strrchr: %p	expected: %p\n", ft_strrchr(s1, c1), expected1);
	printf("Result 1 for libc strrchr: %p\n", strrchr(s1, c1));

	char c2 = 'd';
	char *expected2;
	expected2 = (char *)&s1[5];
	printf("Result 2 for ft_strchr: %p	expected: %p\n", ft_strrchr(s1, c2), expected2);
	printf("Result 2 for libc strchr: %p\n", strrchr(s1, c2));
}

int	main(void)
{
	test_isalpha();
	test_isdigit();
	test_isalnum();
	test_isascii();
	test_isprint();
	test_strlen();
	test_memset();
	test_bzero();
	test_memcpy();
	test_memmove();
	test_strlcpy();
	test_strlcat();
	test_toupper();
	test_tolower();
	test_strchr();
	test_strrchr();

	return (0);
}
