/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:23:50 by dde-carv          #+#    #+#             */
/*   Updated: 2024/05/07 15:26:57 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Checks for an alpha character.
//The values returned are nonzero if the character
// c falls into the tested class, and zero if not.

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (42);
	else
		return (0);
}

/* #include <stdio.h>
int	main(void)
{
	int c = 'a';
	int result = ft_isalpha(c);
	printf("Result: %d\n", result);
	return 0;
} */
