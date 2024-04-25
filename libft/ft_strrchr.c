/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:23:14 by dde-carv          #+#    #+#             */
/*   Updated: 2024/04/24 15:35:23 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Returns a pointer to the last occurrence of the character c in the string s.

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == c)
			return ((char *)(s + len));
		len--;
	}
	return (NULL);
}

/* #include <stdio.h>
int main(void)
{
    const char *str = "Hello, World!";
    int c = 'a';

    char *result = ft_strrchr(str, c);

    if (result != NULL)
        printf("Last occurrence of '%c' in '%s' is at
	index %ld\n", c, str, result - str);
    else
        printf("'%c' not found in '%s'\n", c, str);

    return 0;
} */
