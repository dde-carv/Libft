/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:59:11 by dde-carv          #+#    #+#             */
/*   Updated: 2024/05/09 17:37:56 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Allocates and returns a copy of ’s1’ with the characters specified
// in ’set’ removed from the beginning and the end of the string or
// NULL if allocation fails.

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;

	start = 0;
	end = ft_strlen(s1) - 1;
	if (!s1 || !set)
		return (NULL);
	if (!*s1)
		return (ft_strdup(s1));
	while (*(s1 + start) && ft_strchr(set, *(s1 + start)))
		start++;
	while (end >= 0 && ft_strchr(set, *(s1 + end)))
		end--;
	if (start > end)
		return (ft_strdup(""));
	str = malloc(sizeof(char) * (end - start + 2));
	if (!str)
		return (NULL);
	ft_strlcpy(str, (char *)s1 + start, (end - start) + 2);
	return (str);
}

/* #include <stdio.h>
int main(void)
{
	const char	*s1;
	const char	*set;
	char		*trimmed_str;

	s1 = "    Hello, World!    ";
	set = "H";
	trimmed_str = ft_strtrim(s1, set);
	if (trimmed_str)
	{
		printf("Original string: \"%s\"\n", s1);
		printf("Trimmed string: \"%s\"\n", trimmed_str);
		free(trimmed_str);
	}
	else
		printf("Memory allocation failed.\n");
	return 0;
} */
