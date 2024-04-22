/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:24:18 by dde-carv          #+#    #+#             */
/*   Updated: 2024/04/22 15:55:52 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	len;

	len = 0;
	typedef unsigned char a;
	while (len < n)
	{
		if (((a *)str1)[len] != ((a *)str2)[len])
			return (((a *)str1)[len] - ((a *)str2)[len]);
		len++;
	}
	return (0);
}

/* #include <stdio.h>
int main(void)
{
    char str1[] = "Hello, World!";
    char str2[] = "Hello, world!";
    size_t n = 10000000000000;

    int result = ft_memcmp(str1, str2, n);

    if (result == 0)
        printf("The strings are equal.\n");
    else if (result < 0)
        printf("str1 is less than str2.\n");
    else
        printf("str1 is greater than str2.\n");

    return 0;
} */
