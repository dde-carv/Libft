/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 10:00:01 by dde-carv          #+#    #+#             */
/*   Updated: 2024/04/22 15:57:18 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	sub = malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	while (i < len && s[start + i])
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

/* #include <stdio.h>
int main(void)
{
    const char *str = "Hello, World!";
    unsigned int start = 15;
    size_t length = 10;

    char *substring = ft_substr(str, start, length);
    if (substring)
    {
        printf("Original string: %s\n", str);
        printf("Substring from index %u with length %zu: %s\n",
	 start, length, substring);
        free(substring); // Free dynamically allocated memory
    }
    else
    {
        printf("Memory allocation failed!\n");
    }

    return 0;
} */
