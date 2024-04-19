/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:54:34 by dde-carv          #+#    #+#             */
/*   Updated: 2024/04/19 14:59:16 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <string.h>
#include <stdlib.h>

int	numcount(int n)
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
	ptr[len] = 0;
	if (n == -2147483648)
		return (ptr = "-2147483648");
	if (n == 0)
		ptr[0] = 48;
	else if (n < 0)
	{
		ptr[0] = '-';
		n *= -1;
	}
	while (n)
	{
		--len;
		ptr[len] = (n % 10) + 48;
		n = n / 10;
	}
	return (ptr);
}

/* static int	ft_len(int n)
{
	size_t	count;

	count = 0;
	if (n <= 0)
		++count;
	while (n)
	{
		++count;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		len;

	len = ft_len(n);
	ptr = malloc(len + 1);
	if (NULL == ptr)
		return (NULL);
	ptr[len] = '\0';
	if (0 == n)
		ptr[0] = '0';
	else if (n < 0)
		ptr[0] = '-';
	while (n)
	{
		if (n < 0)
			ptr[--len] = (~(n % 10) + 1) + 48;
		else
			ptr[--len] = (n % 10) + 48;
		n /= 10;
	}
	return (ptr);
} */

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
