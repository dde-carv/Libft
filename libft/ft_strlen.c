/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:25:19 by dde-carv          #+#    #+#             */
/*   Updated: 2024/04/22 15:56:47 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

/* #include <stdio.h>
int main(void)
{
	char str[] = "Hello, World!";

	size_t result = ft_strlen(str);
	printf("Length of the string: %zu\n", result);

	return (0);
} */
