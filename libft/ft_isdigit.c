/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:40:52 by dde-carv          #+#    #+#             */
/*   Updated: 2024/05/09 10:58:23 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Checks for a digit (0 - 9).
//The values returned are nonzero if the character
// c falls into the tested class, and zero if not.

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (42);
	else
		return (0);
}

/* #include <stdio.h>
int	main(void)
{
	int c;
	int result;

	c = 48;
	result = ft_isdigit(c);
	printf("Result: %d\n", result);
	return 0;
} */
