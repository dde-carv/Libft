/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 13:47:34 by dde-carv          #+#    #+#             */
/*   Updated: 2024/05/09 10:46:05 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Erases  the  data  in the n bytes of the memory starting
// at the location pointed to by s, by writing zeros.

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/* #include <stdio.h>
int	main(void)
{
	char	*str;

	str = "Hello, World!";
	printf("Before ft_bzero: %s\n", str);
	ft_bzero(str, 5);
	printf("After ft_bzero: %s\n", str);
	return (0);
} */
