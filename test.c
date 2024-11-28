/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkovacev <jkovacev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:49:10 by jkovacev          #+#    #+#             */
/*   Updated: 2024/11/20 11:41:06 by jkovacev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void	test_isalpha(void)
{
	printf("ft_isalpha:	%d, %d, %d, %d\n", ft_isalpha('2'), ft_isalpha('a'), ft_isalpha('Y'), ft_isalpha('+'));
	printf("isalpha:	%d, %d, %d, %d\n\n", isalpha('2'), isalpha('a'), isalpha('Y'), isalpha('+'));
}

void    test_isdigit(void)
{
	printf("ft_isdigit:	%d, %d, %d, %d\n", ft_isdigit('5'), ft_isdigit('s'), ft_isdigit('0'), ft_isdigit('^'));
	printf("isdigit:	%d, %d, %d, %d\n\n", isdigit('5'), isdigit('s'), isdigit('0'), isdigit('^'));
}

void    test_isalnum(void)
{
	printf("ft_isalnum:	%d, %d, %d, %d, %d\n", ft_isalnum('2'), ft_isalnum('a'), ft_isalnum('Y'), ft_isalnum('&'), ft_isalnum('0'));
	printf("isalnum:	%d, %d, %d, %d, %d\n\n", isalnum('2'), isalnum('a'), isalnum('Y'), isalnum('&'), isalnum('0'));
}

void    test_isascii(void)
{
    printf("ft_isascii:	%d, %d, %d, %d, %d, %d\n", ft_isascii('2'), ft_isascii('a'), ft_isascii('+'), ft_isascii(-1), ft_isascii(178), ft_isascii(250));
	printf("isascii:	%d, %d, %d, %d, %d, %d\n\n", isascii('2'), isascii('a'), isascii('+'), isascii(-1), isascii(178), isascii(250));
}

void    test_isprint(void)
{
	printf("ft_isprint:	%d, %d, %d, %d, %d, %d\n", ft_isprint('2'), ft_isprint('a'), ft_isprint('\n'), ft_isprint('+'), ft_isprint(0), ft_isprint(8));
	printf("isprint:	%d, %d, %d, %d, %d, %d\n\n", isprint('2'), isprint('a'), isprint('\n'), isprint('+'), isprint(0), isprint(8));
}

void    test_strlen(void)
{
	char	*a = "hello";
	char	*b = "B";
	char	*c = "good morning";
	
	printf("ft_strlen:	%zu, %zu, %zu\n", ft_strlen(a), ft_strlen(b), ft_strlen(c));
	printf("strlen:		%zu, %zu, %zu\n\n", strlen(a), strlen(b), strlen(c));
}

void	test_memset(void)
{
	char	s1[13] = "Good morning\0";
	char	c = '+';
	size_t	n = 4;

	ft_memset(s1, c, n);
	printf("ft_memset:	%s\n", s1);

	char	s2[13] = "Good morning\0";

	memset(s2, c, n);
	printf("memset:		%s\n", s2);

	char s3[6] = "hello\0";

	ft_memset(s3, c, n);
	printf("ft_memset:	%s\n", s3);

	char s4[6] = "hello\0";

	memset(s4, c, n);
	printf("memset:		%s\n\n", s4);
}

void	test_bzero(void)
{
	char	s1[12] = "Hello World\0";
	ft_bzero(s1, 4);
	printf("ft_bzero:	%s\n", s1);

	char	s2[12] = "Hello World\0";
	bzero(s2, 4);
	printf("bzero:		%s\n\n", s2);
}

void	test_memcpy(void)
{
	const char *src = "42 Berlin";
	char	dest[10] = "123456789";
	char	*d;
	char	*d_c;

	d = ft_memcpy(dest, src, 3);
	printf("ft_memcpy 1:	%s\n", d);
	d_c = memcpy(dest, src, 3);
	printf("memcpy 1:	%s\n", d_c);

	d = ft_memcpy(dest, src, ft_strlen(src));
	printf("ft_memcpy 2:	%s\n", d);
	d_c = memcpy(dest, src, strlen(src));
	printf("memcpy 2:	%s\n", d_c);

	d = ft_memcpy(dest, src, 10);
	printf("ft_memcpy 3:	%s\n", d);
	d_c = memcpy(dest, src, strlen(src));
	printf("memcpy 3:	%s\n\n", d_c);

	char test1[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', '\0'};
	char *d1;
	d1 = &test1[3];
	char *d_c_1 = &test1[3];
	char *s1;
	s1 = &test1[0];
	d1 = ft_memcpy(d1, s1, 3);
	printf("ft_memcpy 4:	%s\n", d1);
	d_c_1 = memcpy(d1, s1, 3);
	printf("memcpy 4:	%s\n", d_c_1);
}

void	test_memmove(void)
{
	char test1[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', '\0'};
	char *d1;
	d1 = &test1[3];
	char *s1;
	s1 = &test1[0];
	ft_memmove(d1, s1, 4);
	printf("ft_memmove 1:	%s\n", d1);

	char test1c[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', '\0'};
	char *d1c;
	d1c = &test1c[3];
	char *s1c;
	s1c = &test1c[0];
	memmove(d1c, s1c, 4);
	printf("memmove 1:	%s\n", d1c);

	char test2[] = { '1', '2', '3', '4', '5', '6', '0', '0', '0', '\0'};
	char *d2;
	d2 = &test2[5];
	char *s2;
	s2 = &test2[0];
	ft_memmove(d2, s2, 3);
	printf("ft_memmove 2:	%s\n", d2);

	char test2c[] = { '1', '2', '3', '4', '5', '6', '0', '0', '0', '\0'};
	char *d2c;
	d2c = &test2c[5];
	char *s2c;
	s2c = &test2c[0];
	memmove(d2c, s2c, 3);
	printf("memmove 2:	%s\n", d2c);

	char test3[] = { '7', '8', '9', '0', '0', '0', '\0'};
	char *d3;
	d3 = &test3[2];
	char *s3;
	s3 = &test3[0];
	ft_memmove(d3, s3, 2);
	printf("ft_memmove 3:	%s\n", d3);
	
	char test3c[] = { '7', '8', '9', '0', '0', '0', '\0'};
	char *d3c;
	d3c = &test3c[2];
	char *s3c;
	s3c = &test3c[0];
	memmove(d3c, s3c, 2);
	printf("memmove 3:	%s\n\n", d3c);
}

void	test_strlcpy(void)
{
	char	d1[13];
	const char	*src1 = "good morning";
	size_t result;

	result = ft_strlcpy(d1, src1, 13);
	printf("ft_strlcpy:	Total length (12):	%zu\nResulting string (good morning):	%s\n", result, d1);

	char	d2[5];
	const char	*src2 = "blah";
	
	result = ft_strlcpy(d2, src2, 5);
	printf("ft_strlcpy:	Total length (4):	%zu\nResulting string (blah):		%s\n\n", result, d2);
}

void	test_strlcat(void)
{
	const char *s1 = "morning";
	char d1[13] = "Good ";
	size_t result;

	result = ft_strlcat(d1, s1, 13);
	printf("ft_strlcat:	Total length (12):	%zu\nResulting string (Good morning):	%s\n", result, d1);

	const char *s2 = "5678";
	char d2[9] = "1234";
    result = ft_strlcat(d2, s2, 9);
	printf("ft_strlcat:	Total length (8):	%zu\nResulting string (12345678):		%s\n", result, d2);

	char dest[30]; memset(dest, 0, 30);
	char * src = (char *)"AAAAAAAAA";
	dest[0] = 'B';
	printf("function: %zu, dest: %s\n\n", ft_strlcat(dest, src, 0), dest);
}

void	test_toupper(void)
{
	printf("ft_toupper:	%c, %c, %c\n", ft_toupper('a'), ft_toupper('A'), ft_toupper('4'));
	printf("toupper:	%c, %c, %c\n\n", toupper('a'), toupper('A'), toupper('4'));
}

void    test_tolower(void)
{
	printf("ft_tolower:	%c, %c, %c\n", ft_tolower('A'), ft_tolower('a'), ft_tolower('4'));
	printf("tolower:	%c, %c, %c\n\n", tolower('A'), tolower('a'), tolower('4'));
}

void	test_strchr(void)
{
	const char *s1 = "abcadd";
	char c1 = 'a';
	printf("ft_strchr	1: %p\n", ft_strchr(s1, c1));
	printf("strchr		1: %p\n", strchr(s1, c1));

	char c2 = 'd';
	printf("ft_strchr	2: %p\n", ft_strchr(s1, c2));
	printf("strchr		2: %p\n", strchr(s1, c2));

	char c3 = '\0';
	printf("ft_strchr	3: %p\n", ft_strchr(s1, c3));
	printf("strchr		3: %p\n\n", strchr(s1, c3));
}

void	test_strrchr(void)
{
	const char *s1 = "abcadd";
	char c1 = 'a';
	printf("ft_strrchr	1: %p\n", ft_strrchr(s1, c1));
	printf("strrchr		1: %p\n", strrchr(s1, c1));

	char c2 = 'd';
	printf("ft_strrchr	2: %p\n", ft_strrchr(s1, c2));
	printf("strrchr		2: %p\n", strrchr(s1, c2));

	char c3 = '\0';
	printf("ft_strrchr	3: %p\n", ft_strrchr(s1, c3));
	printf("strrchr		3: %p\n\n", strrchr(s1, c3));
}

void	test_strncmp(void)
{
	const char *s1 = "abcdefgh";
	const char *s2 = "abcd";

	const char *s3 = "\0";
	const char *s4 = "123abc";
	const char *s5 = "aab";

	printf("ft_strncmp:	%d, %d, %d, %d, %d\n", ft_strncmp(s1, s2, 4), ft_strncmp(s1, s3, 2), ft_strncmp(s3, s1, 4), ft_strncmp(s1, s4, 6), ft_strncmp(s1, s5, 3));
	printf("strncmp:	%d, %d, %d, %d, %d\n\n", strncmp(s1, s2, 4), strncmp(s1, s3, 2), strncmp(s3, s1, 4), strncmp(s1, s4, 6), strncmp(s1, s5, 3));
}

void	test_memchr(void)
{
	char *s = "abc";
    char c1 = '+';
	char c2 = '\0';
	char c3 = 'a';
	char c4 = 'c';
    
    printf("ft_memchr:	%p, %p, %p, %p\n", ft_memchr(s, c1, 3), ft_memchr(s, c2, 3), ft_memchr(s, c3, 3), ft_memchr(s, c4, 3));
    printf("memchr:		%p, %p, %p, %p\n\n", memchr(s, c1, 3), memchr(s, c2, 3), memchr(s, c3, 3), memchr(s, c4, 3));
}

void	test_memcmp(void)
{
	char *s1 = "abc";

    char *s2 = "abc";
	char *s3 = "bbc";
	char *s4 = "123jk";
	char s5[] = { '\0' };
    
    printf("ft_memcmp:	%d, %d, %d, %d, %d\n", ft_memcmp(s1, s2, 3), ft_memcmp(s1, s3, 3), ft_memcmp(s1, s4, 3), ft_memcmp(s1, s5, 2), ft_memcmp(s2, s1, 3));
    printf("memcmp:		%d, %d, %d, %d, %d\n\n", memcmp(s1, s2, 3), memcmp(s1, s3, 3), memcmp(s1, s4, 3), memcmp(s1, s5, 1), memcmp(s2, s1, 3));
}

void	test_strnstr(void)
{
	char *big = "hello world";
    char *little1 = "world";
	char *little2 = "\0";
	char *little3 = "abc";
    
    printf("Expected 1:	%p\n", &big[6]);
    printf("ft_strnstr 1:	%p\n", ft_strnstr(big, little1, 5));
	printf("Expected 2:	%p\n", &big[0]);
	printf("ft_strnstr 2:	%p\n", ft_strnstr(big, little2, 2));
	printf("Expected 3:	%p\n", NULL);
	printf("ft_strnstr 3:	%p\n\n", ft_strnstr(big, little3, 3));
}

void	test_atoi(void)
{
	printf("atoi: %d    ft_atoi: %d\n", atoi("\t\n\v\f\r     10"), ft_atoi("\t\n\v\f\r     10"));
    printf("atoi: %d    ft_atoi: %d\n", atoi("\t\n\v\f\ra1"), ft_atoi("\t\n\v\f\ra1"));
    printf("atoi: %d    ft_atoi: %d\n", atoi("\t\n\v\f\r--1"), ft_atoi("\t\n\v\f\r--1"));
    printf("atoi: %d    ft_atoi: %d\n", atoi("\t\n\v\f\r++1"), ft_atoi("\t\n\v\f\r++1"));
    printf("atoi: %d    ft_atoi: %d\n", atoi("\t\n\v\f\r+1"), ft_atoi("\t\n\v\f\r+1"));
    printf("atoi: %d    ft_atoi: %d\n", atoi("\t\n\v\f\r-1"), ft_atoi("\t\n\v\f\r-1"));
    printf("atoi: %d    ft_atoi: %d\n", atoi("\t\n\v\f\r0"), ft_atoi("\t\n\v\f\r0"));
    printf("atoi: %d    ft_atoi: %d\n", atoi("\t\n\v\f\r+42lyon"), ft_atoi("\t\n\v\f\r+42lyon"));
    printf("atoi: %d    ft_atoi: %d\n", atoi("\t\n\v\f\r+101"), ft_atoi("\t\n\v\f\r+101"));
    printf("atoi: %d    ft_atoi: %d\n", atoi("\t\n\v\f\r2147483647"), ft_atoi("\t\n\v\f\r2147483647"));
    printf("atoi: %d    ft_atoi: %d\n", atoi("\t\n\v\f\r-2147483648"), ft_atoi("\t\n\v\f\r-2147483648"));
    printf("atoi: %d    ft_atoi: %d\n", atoi("-+42"), ft_atoi("-+42"));
    printf("atoi: %d    ft_atoi: %d\n", atoi("+-42"), ft_atoi("+-42"));
    printf("atoi: %d    ft_atoi: %d\n", atoi("+\t\n\v\f\r42"), ft_atoi("+\t\n\v\f\r42"));
    printf("atoi: %d    ft_atoi: %d\n", atoi("-\t\n\v\f\r42"), ft_atoi("-\t\n\v\f\r42"));
    printf("atoi: %d    ft_atoi: %d\n", atoi("1\t\n\v\f\r42"), ft_atoi("1\t\n\v\f\r42"));
    printf("atoi: %d    ft_atoi: %d\n", atoi("-1\t\n\v\f\r42"), ft_atoi("-1\t\n\v\f\r42"));
}

void	test_calloc(void)
{
	size_t nelem = 5;
    size_t elsize = 1;
	void *p1 = calloc(nelem, elsize);
	void *p2 = ft_calloc(nelem, elsize);
    
    printf("calloc:		%p\n", p1);
	free(p1);
    printf("ft_calloc:	%p\n\n", ft_calloc(nelem, elsize));
	free(p2);
}

void	test_strdup(void)
{
	const char *s = "hello";
    char *result = ft_strdup(s);
    printf("ft_strdup:	%s\n", result);
    printf("Original address:	%p\nduplicate address:	%p\n", s, result);
    free(result);

    char *lib_result = strdup(s);
    printf("strdup:		%s\n", lib_result);
    printf("Original address:	%p\nduplicate address:	%p\n\n", s, lib_result);
    free(lib_result);
}

void	test_substr(void)
{
	char *s = "Hello world";
	size_t len = 5;
	unsigned int start = 6;
	char *substr;

	substr = ft_substr(s, start, len);
	printf("ft_substr: %s\n", substr);
	free(substr);

	s = "weightlifting";
	len = 7;
	substr = ft_substr(s, start, len);
        printf("ft_substr: %s\n", substr);
        free(substr);

	len = -2;
	substr = ft_substr(s, start, len);
	printf("ft_substr: %s\n\n", substr);
	free(substr);
}

void	test_strjoin(void)
{
	char *s1 = "Hello ";
	char *s2 = "world";
	char *result;

	result = ft_strjoin(s1, s2);
	printf("ft_strjoin: %s\n\n", result);
	free (result);
}

void	test_strtrim(void)
{
	char * s = ft_strtrim("   xxx   xxx", " x");
 	printf("ft_strtrim: %s\n\n", s);
 	free(s);
}

void	test_itoa(void)
{
	long	num = 2147483647;
	char	*result = ft_itoa(num);
	printf("ft_itoa for int_max: %s\n", result);
	free(result);
	

	num = -2147483648;
	result = ft_itoa(num);
	printf("ft_itoa for int_min: %s\n", result);
	free(result);
	

	num = -1;
	result = ft_itoa(num);
	printf("ft_itoa for -1: %s\n", result);
	free(result);
	

	num = 0;
	result = ft_itoa(num);
	printf("ft_itoa for 0: %s\n", result);
	free(result);
	

	num = 1000;
	result = ft_itoa(num);
	printf("ft_itoa for 1000: %s\n", result);
	free(result);
	

	num = -1000;
	result = ft_itoa(num);
	printf("ft_itoa for -1000: %s\n\n", result);
	free(result);	
}

void	test_ft_putchar_fd(void)
{
	char	c = '@';
	ft_putchar_fd(c, 1);
	write(1, "\n\n", 2);
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
	test_strncmp();
	test_memchr();
	test_memcmp();
	test_strnstr();
	test_atoi();
	test_calloc();
	test_strdup();
	test_substr();
	test_strjoin();
	test_strtrim();
	test_itoa();
	test_ft_putchar_fd();

	return (0);
}
