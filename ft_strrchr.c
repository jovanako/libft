/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkovacev <jkovacev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:13:41 by jkovacev          #+#    #+#             */
/*   Updated: 2024/11/19 17:14:15 by jkovacev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
    char    *seen;

    seen = (void *)0;
    while (*s || *s == c)
    {
        if (*s == c)
        {
            seen = (char *)s;
        }
        s++;
    }
    return (seen);
}
