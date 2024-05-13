/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 10:00:01 by dde-carv          #+#    #+#             */
/*   Updated: 2024/05/10 10:29:17 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Allocates and returns a substring from the string ’s’ or NULL if
// alloaction fails. The substring begins at index ’start’ and is of
// maximum size ’len’.

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	lent;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	lent = ft_strlen(s + start);
	if (lent < len)
		len = lent;
	sub = malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
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
	const char	*str;
	unsigned int	start;
	size_t		length;
	char		*substring;

	str = "Hello, World!";
	start = 15;
	length = 10;
	substring = ft_substr(str, start, length);
	if (substring)
	{
		printf("Original string: %s\n", str);
		printf("Substring from index %u with length %zu: %s\n",
		 start, length, substring);
		free(substring);
	}
	else
	{
		printf("Memory allocation failed!\n");
		free(substring);
	}
	return 0;
} */
