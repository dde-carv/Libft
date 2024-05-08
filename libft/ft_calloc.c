/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:36:07 by dde-carv          #+#    #+#             */
/*   Updated: 2024/05/08 18:55:12 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocates size len and returns a pointer to the allocated  memory.
// The memory is not initialized.
// Return a pointer to  the  allocated memory.
// On error, return NULL.

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	len;
	void	*arr;

	len = nmemb * size;
	if (size && (len / size) != nmemb)
		return (NULL);
	arr = malloc(len);
	if (!arr)
		return (NULL);
	ft_bzero(arr, len);
	return (arr);
}

/* #include <stdio.h>
int	main(void)
{
	char *str;

	str = ft_calloc(20, sizeof(char));
	if (str == NULL)
	{
		printf("Memory not allocated.\n");
		return (1);
	}
	str[0] = 'H';
	str[1] = 'e';
	str[2] = 'l';
	str[3] = 'l';
	str[4] = 'o';
	str[5] = '\0';
	printf("Allocated string: %s\n", str);

	free(str);
	return (0);
} */
