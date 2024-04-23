/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:53:16 by dde-carv          #+#    #+#             */
/*   Updated: 2024/04/23 14:07:46 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Checks whether c is a 7-bit unsigned char
// value that fits into the ASCII character set.
//The values returned are nonzero if the character
// c falls into the tested class, and zero if not.

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/* #include <stdio.h>
int	main(void)
{
	int c = 48;
	int result = ft_isascii(c);
	printf("Result: %d\n", result);
	return 0;
} */
