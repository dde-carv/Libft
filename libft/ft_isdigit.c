/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:40:52 by dde-carv          #+#    #+#             */
/*   Updated: 2024/04/24 13:49:33 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Checks for a digit (0 - 9).
//The values returned are nonzero if the character
// c falls into the tested class, and zero if not.

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

/* #include <stdio.h>
int	main(void)
{
	int c = 48;
	int result = ft_isdigit(c);
	printf("Result: %d\n", result);
	return 0;
} */
