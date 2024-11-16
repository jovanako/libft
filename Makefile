/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkovacev <jkovacev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:51:56 by jkovacev          #+#    #+#             */
/*   Updated: 2024/11/13 11:54:03 by jkovacev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCDIR = jkovacev_libft
INCDIR = libft.h

SRCS = $(SRCDIR)/ft_isalpha.c $(SRCDIR)/ft_isdigit.c $(SRCDIR)/ft_isalnum.c $(SRCDIR)/ft_isascii.c $(SRCDIR)/ft_isprint.c $(SRCDIR)/ft_strlen.c $(SRCDIR)/ft_memset.c $(SRCDIR)/ft_bzero.c $(SRCDIR)/ft_memcpy.c $(SRCDIR)/ft_strlcpy.c $(SRCDIR)/ft_strlcat.c $(SRCDIR)/ft_toupper.c $(SRCDIR)/ft_tolower.c $(SRCDIR)/ft_substr.c $(SRCDIR)/ft_strjoin.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -I$(INCDIR) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
