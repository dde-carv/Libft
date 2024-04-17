/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:24:52 by dde-carv          #+#    #+#             */
/*   Updated: 2024/04/17 13:52:48 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	len;

	len = 0;
	while (len < n)
	{
		((unsigned char *)str)[len] = c;
		len++;
	}
	return (str);
}

/* #include <stdio.h>
int main(void)
{
    char buffer[] = "Hello World my name is.";
    size_t n = 5; // Number of bytes to set
    int value = ' '; // ASCII value of character to set

    memset(buffer, value, n);

    printf("Buffer after memset: \"%s\"\n", buffer);

    return 0;
} */
