/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:54:34 by dde-carv          #+#    #+#             */
/*   Updated: 2024/04/17 15:19:29 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

char	*ft_itoa(int n)
{
	char	*ptr;
	int		len;

	len = ft_strlen(n);
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	ptr[len] = '/0';
	if (n == 0)
		ptr[0] = '0';
	else if (n < 0)
	{
		ptr[0] = '-';
		n = -n;
	}
}
