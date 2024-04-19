/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:23:14 by dde-carv          #+#    #+#             */
/*   Updated: 2024/04/17 13:53:45 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = strlen(s) - 1;
	if (c == 0)
		return ((char *)(s + i + 1));
	while (i >= 0 && s[i] != c)
		i--;
	if (s[i] == c)
		return ((char *)(s + i));
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
