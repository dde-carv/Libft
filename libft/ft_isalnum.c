/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:46:31 by dde-carv          #+#    #+#             */
/*   Updated: 2024/05/09 10:49:36 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Checks for an alphanumeric character.
//The values returned are nonzero if the character
// c falls into the tested class, and zero if not.

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
		return (42);
	else
		return (0);
}

/* #include <stdio.h>
int	main(void)
{
	int	c;
	int	result;

	c = 48;
	result = ft_isalnum(c);
	printf("Result: %d\n", result);
	return 0;
} */
