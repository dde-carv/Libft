/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:25:07 by dde-carv          #+#    #+#             */
/*   Updated: 2024/04/22 17:09:49 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	lend;
	size_t	lens;
	size_t	res;

	lend = 0;
	lens = 0;
	res = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (dest[lend])
		lend++;
	while (src[res])
		res++;
	if (size <= lend)
		res += size;
	else
		res += lend;
	while (src[lens] && (lend + 1) < size)
	{
		dest[lend] = src[lens];
		lend++;
		lens++;
	}
	dest[lend] = '\0';
	return (res);
} */

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (NULL == dest && 0 == size)
		return (src_len);
	dest_len = ft_strlen(dest);
	if (dest_len >= size)
		return (src_len + size);
	else
		size -= dest_len;
	ft_strlcpy(dest + dest_len, src, size);
	return (dest_len + src_len);
}

/* #include <stdio.h>
int main(void)
{
    char dest[20] = "Hello, ";
    char src[] = "World!";
    size_t size = sizeof(dest);

    size_t result = ft_strlcat(dest, src, size);

    printf("Concatenated string: %s\n", dest);
    printf("Length of concatenated string: %zu\n", result);

    return 0;
} */

/* void	ft_print_result(int n)
{
	char c;

	if (n >= 10)
		ft_print_result(n / 10);
	c = n % 10 + '0';
	write (1, &c, 1);
}

int		main(int argc, const char *argv[])
{
	char	*dest;
	int		arg;

	alarm(5);
	if (!(dest = (char *)malloc(sizeof(*dest) * 15)) || argc == 1)
		return (0);
	memset(dest, 0, 15);
	memset(dest, 'r', 6);
	if ((arg = atoi(argv[1])) == 1)
	{
		dest[11] = 'a';
		ft_print_result(ft_strlcat(dest, "lorem", 15));
		write(1, "\n", 1);
		write(1, dest, 15);
	}
	else if (arg == 2)
	{
		ft_print_result(ft_strlcat(dest, "", 15));
		write(1, "\n", 1);
		write(1, dest, 15);
	}
	else if (arg == 3)
	{
		dest[0] = '\0';
		dest[11] = 'a';
		ft_print_result(ft_strlcat(dest, "lorem ipsum", 15));
		write(1, "\n", 1);
		write(1, dest, 15);
	}
	else if (arg == 4)
	{
		dest[14] = 'a';
		ft_print_result(ft_strlcat(dest, "lorem ipsum dolor sit amet", 15));
		write(1, "\n", 1);
		write(1, dest, 15);
	}
	else if (arg == 5)
	{
		dest[10] = 'a';
		ft_print_result(ft_strlcat(dest, "lorem ipsum dolor sit amet", 0));
		write(1, "\n", 1);
		write(1, dest, 15);
	}
	else if (arg == 6)
	{
		dest[10] = 'a';
		ft_print_result(ft_strlcat(dest, "lorem ipsum dolor sit amet", 1));
		write(1, "\n", 1);
		write(1, dest, 15);
	}
	else if (arg == 7)
	{
		memset(dest, 'r', 15);
		ft_print_result(ft_strlcat(dest, "lorem ipsum dolor sit amet", 5));
		write(1, "\n", 1);
		write(1, dest, 15);
	}
	else if (arg == 8)
	{
		dest[10] = 'a';
		ft_print_result(ft_strlcat(dest, "lorem ipsum dolor sit amet", 6));
		write(1, "\n", 1);
		write(1, dest, 15);
	}
	else if (arg == 9)
	{
		memset(dest, 'r', 14);
		ft_print_result(ft_strlcat(dest, "lorem ipsum dolor sit amet", 15));
		write(1, "\n", 1);
		write(1, dest, 15);
	}
	return (0);
} */
