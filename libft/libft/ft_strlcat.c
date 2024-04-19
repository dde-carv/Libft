/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:25:07 by dde-carv          #+#    #+#             */
/*   Updated: 2024/04/17 16:37:05 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	lend;
	size_t	lens;
	size_t	res;

	lend = 0;
	lens = 0;
	res = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (dest[lend])
		lend++;
	while (src[res])
		res++;
	if (size <= lend)
		res += size;
	else
		res += lend;
	while (src[lens] && (lend + 1) < size)
	{
		dest[lend] = src[lens];
		lend++;
		lens++;
	}
	dest[lend] = '\0';
	return (res);
}

/* #include <stdio.h>
int main(void)
{
    char dest[20] = "Hello, ";
    char src[] = "World!";
    size_t size = sizeof(dest);

    size_t result = ft_strlcat(dest, src, size);

    printf("Concatenated string: %s\n", dest);
    printf("Length of concatenated string: %zu\n", result);

    return 0;
} */
