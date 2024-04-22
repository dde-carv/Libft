/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:24:41 by dde-carv          #+#    #+#             */
/*   Updated: 2024/04/22 15:56:06 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	typedef unsigned char a;
	if (src == NULL && dest == NULL)
		return (dest);
	if (dest > src)
	{
		while (n > 0)
		{
			n--;
			*((a *)dest + n) = *((a *)src + n);
		}
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}

/* #include <stdio.h>
int main(void)
{
    char src[] = NULL;
    char dest[] = "Como estas colega.";
    size_t n = strlen(src);

    ft_memmove(dest, src, n);

    printf("Source string: %s\n", src);
    printf("Moved string: %s\n", dest);

    return 0;
} */
