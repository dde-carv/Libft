/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:25:27 by dde-carv          #+#    #+#             */
/*   Updated: 2024/05/07 15:29:39 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Compares the first nbytes of the strings s1 and s2.

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	len;

	len = 0;
	typedef unsigned char uc;
	if (n == 0)
		return (0);
	while (s1[len] && s2[len] && s1[len] == s2[len] && n > 1)
	{
		len++;
		n--;
	}
	return ((uc)s1[len] - (uc)s2[len]);
}

/* #include <stdio.h>
int main(void)
{
    const char *s1 = "";
    const char *s2 = "";
    size_t n = 5; // number of characters to compare

    int result = ft_strncmp(s1, s2, n);

    if (result == 0)
        printf("Strings are equal.\n");
    else if (result < 0)
        printf("String s1 is less than string s2.\n");
    else
        printf("String s1 is greater than string s2.\n");

    return 0;
} */
