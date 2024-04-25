/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:41:02 by dde-carv          #+#    #+#             */
/*   Updated: 2024/04/24 15:39:37 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Convert lowercase letters to uppercase.

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}

/* #include <stdio.h>
int main(void)
{
    int c = 65;
    int result = ft_tolower(c);
    printf("Result: %d\n", result);
    return 0;
} */
