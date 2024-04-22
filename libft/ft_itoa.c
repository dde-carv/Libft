/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:54:34 by dde-carv          #+#    #+#             */
/*   Updated: 2024/04/22 15:51:08 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numcount(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		len;

	len = numcount(n);
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	if (n == 0)
		ptr[0] = 48;
	else if (n < 0)
		ptr[0] = '-';
	while (n)
	{
		--len;
		if (n < 0)
			ptr[len] = (-(n % 10)) + 48;
		else
			ptr[len] = (n % 10) + 48;
		n = n / 10;
	}
	return (ptr);
}

/* #include <stdio.h>

int     main(void)
{
    int number = (-2147483647 -1);
    char *result;

    result = ft_itoa(number);
    if (result!= NULL)
        printf("%s\n", result);
    else
        printf("Error: malloc failed\n");

    return (0);
} */
