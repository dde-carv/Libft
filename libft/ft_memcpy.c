/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:24:24 by dde-carv          #+#    #+#             */
/*   Updated: 2024/04/17 13:49:11 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	len;

	len = 0;
	typedef unsigned char a;
	if (!dest && !src)
		return (NULL);
	while (len < n)
	{
		((a *)dest)[len] = ((a *)src)[len];
		len++;
	}
	return (dest);
}

/* #include <stdio.h>
int main(void)
{
    char src[] = "Hello, World!";
    char dest[] = "Hoello my fello students.";
    size_t n = strlen(src);

    ft_memcpy(dest, src, n + 1);

    printf("Source string: %s\n", src);
    printf("Copied string: %s\n", dest);

    return 0;
} */
