/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:23:14 by dde-carv          #+#    #+#             */
/*   Updated: 2024/05/10 10:01:57 by dde-carv         ###   ########.fr       */
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
		if (s[len] == (char)c)
			return ((char *)(s + len));
		len--;
	}
	return (NULL);
}

/* #include <stdio.h>
int main(void)
{
	const char	*str;
	int		c;
	char		*result;

	str = "Hello, World!";
	c = 'o';
	result = ft_strrchr(str, c);
	if (result != NULL)
		printf("Last occurrence of '%c' in '%s'
		is at index %ld\n", c, str, result - str);
	else
		printf("'%c' not found in '%s'\n", c, str);
	return 0;
} */
