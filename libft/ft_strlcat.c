/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:25:07 by dde-carv          #+#    #+#             */
/*   Updated: 2024/04/23 17:13:03 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	lend;
	size_t	lens;
	size_t	res;

	lens = ft_strlen(src);
	if (dest == NULL && size == 0)
		return (lens);
	lend = ft_strlen(dest);
	if (size <= lend)
		return (lens + size);
	else
		size -= lend;
	ft_strlcpy(dest + lend, src, size);
	res = lend + lens;
	return (res);
}


