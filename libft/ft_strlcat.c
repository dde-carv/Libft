/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:25:07 by dde-carv          #+#    #+#             */
/*   Updated: 2024/05/09 17:14:27 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Appends the NUL-terminated string src to the end of dst.
// It will append at most size - strlen(dst) - 1 bytes, NUL-termi‐
// nating the result.
//Return the total length of the string they tried to create.

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	lend;
	size_t	lens;
	size_t	res;

	lens = ft_strlen(src);
	if (dest == NULL && size == 0)
		return (lens);
	lend = ft_strlen(dest);
	if (size <= lend)
		return (lens + size);
	else
		size -= lend;
	ft_strlcpy(dest + lend, src, size);
	res = lend + lens;
	return (res);
}

/* #include <stdio.h>
int main() {
	char	dest[20] = "Hello";
	const	char src[] = " World!";
	size_t	size;

	size = 15;
	printf("Destin: %s Total:%zu\n", dest, ft_strlcat(dest, src, size));
	return 0;
} */
