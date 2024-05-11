/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:24:59 by dde-carv          #+#    #+#             */
/*   Updated: 2024/05/10 10:00:45 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Returns a pointer to the first occurrence of the character c in the string s.

char	*ft_strchr(const char *str, int c)
{
	while (*str && (char)c != *str)
		str++;
	if ((char)c == *str)
		return ((char *)str);
	return (NULL);
}
