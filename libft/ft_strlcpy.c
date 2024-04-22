/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:25:13 by dde-carv          #+#    #+#             */
/*   Updated: 2024/04/22 15:56:43 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	len;
	size_t	lensrc;

	len = 0;
	lensrc = ft_strlen(src);
	if (!dest || !src)
		return (0);
	if (size == 0)
		return (lensrc);
	while ((len < (size - 1)) && src[len])
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';
	return (lensrc);
}

/* #include <stdio.h>
int main(void)
{
    char src[] = "Hello, World!";
    char dest[0]; // Destination buffer

    size_t result = ft_strlcpy(dest, src, sizeof(dest));

    printf("Copied string: %s\n", dest);
    printf("Length of copied string: %zu\n", result);

    return 0;
} */
