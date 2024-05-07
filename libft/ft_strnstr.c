/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:25:35 by dde-carv          #+#    #+#             */
/*   Updated: 2024/05/07 15:29:44 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Locates the first occurrence of the null-terminated string little in the
// string big, where not more than len characters are searched.
//If little is an empty string, big is returned; if little occurs nowhere
// in big,NULL is returned; otherwise a pointer to the first character of
// the first occurrence of little is returned.

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	lenb;
	size_t	lenl;

	lenb = 0;
	if ((big == NULL && !n) || !*little)
		return ((char *)big);
	while (big[lenb])
	{
		lenl = 0;
		while (big[lenb] == little[lenl] && big[lenb] && lenb < n)
		{
			lenb++;
			lenl++;
		}
		if (!little[lenl])
			return ((char *)&big[lenb - lenl]);
		lenb = (lenb - lenl) + 1;
	}
	return (NULL);
}

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
