/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:25:35 by dde-carv          #+#    #+#             */
/*   Updated: 2024/04/17 16:59:18 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	lenb;
	size_t	lenl;

	lenb = 0;
	lenl = 0;
	if (!n)
		return (NULL);
	if (!*big || !*little)
		return ((char *)big);
	while (big[lenb])
	{
		while (big[lenb] == little[lenl] && big[lenb] && lenb < n)
		{
			lenb++;
			lenl++;
		}
		if (!little[lenl])
			return ((char *)&big[lenb - lenl]);
		lenl = 0;
		lenb = (lenb - lenl) + 1;
	}
	return (NULL);
}


/* char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	j;
	size_t	k;

	j = 0;
	if (!*needle || (NULL == haystack && !len))
		return ((char *)haystack);
	while (*(haystack + j) && j < len)
	{
		k = 0;
		while (*(haystack + j + k) == *(needle + k) && (k + j) < len)
		{
			if (0 == *(needle + k + 1))
				return ((char *)haystack + j);
			++k;
		}
		++j;
	}
	return (NULL);
} */

/* #include <stdio.h>
int main() {
    char haystack[] = "Hello, world! How are you?";
    char needle[0];
    char *result;

    // Search for the substring "world" in the haystack string
    result = ft_strnstr(haystack, needle, 0);

    // Check if the substring was found
    if (result != NULL) {
        printf("Substring found at position: %ld\n", result - haystack);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
} */
