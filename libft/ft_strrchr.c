/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:23:14 by dde-carv          #+#    #+#             */
/*   Updated: 2024/04/22 15:57:08 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s) - 1;
	if (c == 0)
		return ((char *)(s + len + 1));
	while (len >= 0 && s[len] != c)
		len--;
	if (s[len] == c)
		return ((char *)(s + len));
	else
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
