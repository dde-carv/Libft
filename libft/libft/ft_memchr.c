/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:24:11 by dde-carv          #+#    #+#             */
/*   Updated: 2024/04/18 13:58:19 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	len;

	len = 0;
	typedef unsigned char a;
	while (len < n)
	{
		if (((a *)str)[len] == (a)c)
			return ((void *)(str + len));
		len++;
	}
	return (NULL);
}

/* #include <stdio.h>
int main(void)
{
    char str[] = "/0";
    int c = 'p';
    size_t n = strlen(str);

    void *result = ft_memchr(str, c, n);

    if (result != NULL)
        printf("Character '%c' found at index %ld\n", c, (char *)result - str);
    else
        printf("Character '%c' not found\n", c);

    return 0;
} */
