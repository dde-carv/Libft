/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:57:06 by dde-carv          #+#    #+#             */
/*   Updated: 2024/04/24 13:49:40 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Checks for any printable character including space.
//The values returned are nonzero if the character
// c falls into the tested class, and zero if not.

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/* #include <stdio.h>
int	main(void)
{
	int c = 4;
	int result = ft_isprint(c);
	printf("Result: %d\n", result);
	return 0;
}  */
