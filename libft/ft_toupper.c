/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:47:45 by dde-carv          #+#    #+#             */
/*   Updated: 2024/05/07 15:30:11 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Convert uppercase letters to lowercase.

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}

/* #include <stdio.h>
int main(void)
{
    int c = 122;
    int result = ft_toupper(c);
    printf("Result: %d\n", result);
    return 0;
} */
