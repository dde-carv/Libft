/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 10:57:32 by dde-carv          #+#    #+#             */
/*   Updated: 2024/05/09 17:35:34 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Allocates (with malloc(3)) and returns a new
// string, which is the result of the concatenation
// of ’s1’ and ’s2’, or NULL if the allocation fails.

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lens1;
	size_t	lens2;
	size_t	totallen;
	char	*str;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	totallen = lens1 + lens2 + 1;
	if (!s1 && !s2)
		return (NULL);
	str = malloc(sizeof(char) * (totallen));
	if (!str)
		return (NULL);
	ft_strlcpy(str, (char *)s1, lens1 + 1);
	ft_strlcat(str, (char *)s2, totallen);
	return (str);
}

/* #include <stdio.h>
int main(void)
{
	const char	*s1;
	const char	*s2;
	char		*str;

	s1 = "Hello, ";
	s2 = "World!";
	str = ft_strjoin(s1, s2);
	if (str != NULL)
	{
		printf("The prefix string: %s\n", s1);
		printf("The suffix string: %s\n", s2);
		printf("New string: %s\n", str);
		free(str);
	}
	else
		printf("Memory allocation failed!\n");
	return 0;
} */
