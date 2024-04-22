/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:36:07 by dde-carv          #+#    #+#             */
/*   Updated: 2024/04/22 15:50:28 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	bytes;
	void	*arr;

	bytes = nmemb * size;
	if (size && (bytes / size) != nmemb)
		return (NULL);
	arr = malloc(bytes);
	if (!arr)
		return (NULL);
	ft_bzero(arr, bytes);
	return (arr);
}

/* #include <stdio.h>
int main(void)
{
    size_t nmemb = 0;
    size_t size = 0;

    int *arr = ft_calloc(nmemb, size);

    if (arr != NULL)
    {
        printf("Memory allocated successfully using ft_calloc:\n");
        for (size_t i = 0; i < nmemb; i++)
            printf("arr[%zu] = %d\n", i, arr[i]);

        free(arr);
    }
    else
    {
        printf("Memory allocation failed!\n");
    }

    return 0;
} */
