/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:24:41 by dde-carv          #+#    #+#             */
/*   Updated: 2024/04/17 16:23:06 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	len;
	char	*temp_d;
	char	*temp_s;

	len = 0;
	temp_d = (char *)dest;
	temp_s = (char *)src;
	if (temp_d > temp_s)
	{
		while (n > 0)
		{
			temp_d[n] = temp_s[n];
			n--;
		}
	}
	else
	{
		while (len < n)
		{
			temp_d[len] = temp_s[len];
			len++;
		}
	}
	return (dest);
}
/* void	*ft_memmove(void *dest, const void *src, size_t n)
{
	typedef unsigned char byte;
	if ((NULL == src && NULL == dest))
		return (dest);
	if (dest > src)
		while (n--)
			*((byte *)dest + n) = *((byte *)src + n);
	else
		ft_memcpy(dest, src, n);
	return (dest);
} */

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
