/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:24:59 by dde-carv          #+#    #+#             */
/*   Updated: 2024/04/17 13:53:08 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strchr(const char *str, int c)
{
	while (*str && c != *str)
		str++;
	if (c == *str)
		return ((char *)str);
	return (NULL);
}

/* #include <stdio.h>
int main(void)
{
    char str[] = "Hello, World!";
    int c = 'o'; // Character to search for

    char *result = ft_strchr(str, c);

    if (result != NULL)
        printf("Character '%c' found at position: %ld\n", c, result - str);
    else
        printf("Character '%c' not found.\n", c);

    return 0;
} */
